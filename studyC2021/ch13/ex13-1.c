#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
// 2021�� 5�� 25�� ȭ����
// �ۼ��� : ������
// 357p ���� 13-1 �� �Լ����� ���� �̸��� ���� ������ ����� ���
void assign(void);

int main(void)
{
	auto int a = 0;

	assign();
	printf("main �Լ� a : %d\n", a);

	return 0;
}

void assign(void)
{
	int a;

	a = 10;
	printf("assign �Լ� a : %d\n", a);
}