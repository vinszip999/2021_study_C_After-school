#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
// 2021�� 9�� 23�� �����
// �ۼ��� : ������
// �迭 �� �� 0���� ã�� �迭 �ڷ� ��ġ��Ű��

int main(void)
{
	int arr1[] = { 2, 3, 0, 0, 4, 0, 6 };
	int n = sizeof(arr1) / sizeof(arr1[0]);

	int arr2[7]; // arr2[n]; <- [] �ȿ� ��� ���� �־���ؼ� ������ ���Ƿ�, 7�� ����.
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