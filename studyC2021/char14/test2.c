#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
// 2021�� 9�� 23�� �����
// �ۼ��� : ������
// �迭 �� �� 0���� ã�� �迭 �ڷ� ��ġ��Ű�� ( arr2 �迭�� ���� ����)
int main(void)
{
	int arr1[] = { 2, 3, 0, 0, 4, 0, 6 };
	int n = sizeof(arr1) / sizeof(arr1[0]);

	int j = 0;
	for (int i = 0; i < n; i++)
	{
		if (arr1[i] != 0) {
			arr1[j] = arr1[i];
			j = j + 1;
		}
	}
	for (int i = j; i < n; i++)
	{
		arr1[i] = 0;
	}

	for (int i = 0; i < n; i++)
	{
		printf("%d", arr1[i]);
	}

	return 0;

}