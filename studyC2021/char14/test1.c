#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
// 2021년 9월 23일 목요일
// 작성자 : 이유빈
// 배열 값 중 0값을 찾아 배열 뒤로 배치시키기

int main(void)
{
	int arr1[] = { 2, 3, 0, 0, 4, 0, 6 };
	int n = sizeof(arr1) / sizeof(arr1[0]);

	int arr2[7]; // arr2[n]; <- [] 안에 상수 값을 넣어야해서 오류가 나므로, 7로 대입.
	int j = 0;
	for (int i = 0; i < n; i++)
	{
		if (arr1[i] != 0) {
			arr2[j] = arr1[i];
			j = j + 1;
		}
	}
	for (int i = j; i < n; i++)
	{
		arr2[i] = 0;
	}

	for (int i = 0; i < n; i++)
	{
		printf("%d", arr2[i]);
	}

	return 0;

}