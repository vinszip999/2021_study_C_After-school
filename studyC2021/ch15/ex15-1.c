#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
// 2021�� 6�� 13 �����
// �ۼ��� : ������
// 417p 15-1 �����Ϳ� ���� �������� ����
int main(void)
{
	int a = 10;
	int* pi;
	int** ppi;

	pi = &a;
	ppi = &pi;

	printf("---------------------------------\n");
	printf("����	������	   &����	 **����\n");
	printf("---------------------------------\n");
	printf("a%10d%10u\n", a, &a);
	printf("pi%10u%10u%10d\n", pi, &pi, *pi);
	printf("ppi%10u%10u%10u%10u\n", ppi, &ppi, *ppi, **ppi);
	printf("----------------------------------\n");

	return 0;
}