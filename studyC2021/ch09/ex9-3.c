#include <stdio.h>
// 2021�� 4�� 8�� �����
// �ۼ��� : ������
// 241p ���� 9-3 �����͸� ����� �� ������ �հ� ��� ���
int main(void)
{
	int a = 10, b = 15, total;
	double avg;
	int *pa, *pb;
	int *pt = &total;
	double *pg = &avg;

	pa = &a;
	pb = &b;

	*pt = *pa + *pb;
	*pg = *pt / 2.0;

	printf("�� ������ �� : %d, %d\n", *pa, *pb);
	printf("�� ������ �� : %d\n", *pt);
	printf("�� ������ ��� : %.1lf\n", *pg);

	return 0;
}