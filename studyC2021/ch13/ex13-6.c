#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
// 2021�� 5�� 25�� ȭ����
// �ۼ��� : ������
// 372p ���� 13-6 10�� ���ϱ� ���� ���� �μ��� �ִ� ���
void add_ten(int a);

int main(void)
{
	int a = 10;

	add_ten(a);
	printf("a : %d\n", a);

	return 0;
}

void add_ten(int a)
{
	a = a + 10;
}