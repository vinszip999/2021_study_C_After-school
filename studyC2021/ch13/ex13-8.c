#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
// 2021�� 5�� 27�� �����
// �ۼ��� : ������
// 376p ���� 13-8 �ּҸ� ��ȯ�Ͽ� �� ������ �� ���
int* sum(int a, int b);

int main(void)
{
	int* resp;

	resp = sum(10, 20);
	printf("�� ������ �� : %d\n", *resp);

	return 0;
}

int* sum(int a, int b)
{
	static int res;

	res = a + b;

	return &res;
}