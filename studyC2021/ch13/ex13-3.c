#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
// 2021�� 5�� 25�� ȭ����
// �ۼ��� : ������
// 361p ���� 13-3 ���� ������ ���
void assign10(void);
void assign20(void);

int a;

int main(void)
{
	printf("�Լ� ȣ�� �� a �� : %d\n", a);

	assign10();
	assign20();

	printf("�Լ� ȣ�� �� a �� : %d\n", a);

	return 0;
}

void assign10(void) {
	a = 10;
}

void assign20(void) {
	int a;
	a = 20;
}