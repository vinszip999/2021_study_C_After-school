#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// 2021�� 4�� 6�� ȭ���� 
// �ۼ��� : ������
// ������ �޸� �ּ� Ȯ��

int main(void)
{
	int a;
	double b;
	char c;

	printf("int�� ������ �ּ� : %p\n", &a); // �ּ� �����ڷ� �ּ� ���
	printf("double�� ������ �ּ� : %p\n", &b);
	printf("char�� ������ �ּ� : %p\n", &c);

	return 0;
}