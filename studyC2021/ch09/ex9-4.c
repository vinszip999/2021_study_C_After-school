#include <stdio.h>
// 2021�� 4�� 8�� �����
// �ۼ��� : ������
// 244p ���� 9-4 �����Ϳ� const ���
int main(void)
{
	int a = 10, b = 20;
	const int* pa = &a;

	printf("���� a �� : %d\n", *pa);
	pa = &b;
	printf("���� b �� : %d\n", *pa);
	pa = &a;
	a = 20;
	printf("���� a �� : %d\n", *pa);


	return 0;
}