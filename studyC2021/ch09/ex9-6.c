#include <stdio.h>
// 2021�� 4�� 8�� �����
// �ۼ��� : ������
// 251p ���� 9-6 ������ �ʴ� �������� ����
int main(void)
{
	int a = 10;
	int* p = &a;
	double* pd;

	pd = p;
	printf("%lf\n", *pd);


	return 0;
}