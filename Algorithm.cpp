#include <iostream>
#include <vector>
#include <list>
#include <stack>
#include <queue>
using namespace std;

// 이진 탐색 트리

// 이진 탐색(binary search)
// 상황) 배열에 데이터가 정렬되어 있다

// Q) 82라는 숫자가 배열에 있습니까?
// [1][8][15][23][32][44][56][63][81][91]

vector<int> numbers;

void BinarySearch(int N)
{
	int left = 0;
	int right = (int)numbers.size() - 1;

	while (left <= right)
	{
		cout << "탐색 범위: " << left << "~" << right << endl;

		int mid = (left + right) / 2; //반내림(소수점 삭제)
		if (N < numbers[mid])
		{
			cout << N << " < " << numbers[mid] << endl;
			right = mid - 1;
		}

		else if (N > numbers[mid])
		{
			cout << N << " > " << numbers[mid] << endl;
			left = mid + 1;
		}

		else
		{
			cout << "찾음!" << endl;
			break;
		}
	}
}

int main()
{
	numbers = vector<int>{ 1, 8, 15, 23, 32, 44, 56, 63, 81, 91 };

	BinarySearch(81);
}