#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
// 2021�� 6�� 8�� ȭ����
// �ۼ��� : ������
// 437p Ȯ�ι��� 2��
int main(void)
{
	int a = 10, b = 20;
	int* pa = &a, * pb = &b;
	int** ppa = &pa, ** ppb = &pb;
	int* pt;

	pt = *ppa;
	*ppa = *ppb;
	*ppb = pt;
	
	printf("a:%d, b:%d\n", a, b);
	printf("*pa:%d, *pb:%d\n", *pa, *pb);

	return 0;
}