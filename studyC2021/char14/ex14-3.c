#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
// 2021�� 9�� 23�� �����
// �ۼ��� : ������
// 393p ���� ���� ���� �̸��� ������ϴ� ���α׷�

int main(void)
{
	char animal[5][20];
	int i;
	int count;

	count = sizeof(animal) / sizeof(animal[0]); // 5*20 = 100 �̴ϱ� 100 / 20 = 5   count = 5
	for (i = 0; i < count; i++) // i<5; ��, i�� 0,1,2,3,4 ����
	{
		scanf_s("%s", animal[0]);
	}

	for (i = 0; i < count; i++)
	{
		printf("%s", animal[i]);
	}

	return 0;

}