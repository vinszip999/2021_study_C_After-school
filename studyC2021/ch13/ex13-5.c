#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
// 2021�� 5�� 25�� ȭ����
// �ۼ��� : ������
// 366p ���� 13-5 �������� ������ �ݺ����� ����� ��

int main(void)
{
	register int i;
	auto int sum = 0;

	for (i = 1; i <= 10000; i++)
	{
		sum += i;
	}

	printf("%d\n", sum);

	return 0;
}