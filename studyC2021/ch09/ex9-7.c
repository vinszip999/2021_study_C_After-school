#include <stdio.h>
// 2021�� 4�� 8�� �����
// �ۼ��� : ������
// 254p ���� 9-7 �����͸� ����� �� ������ �� ��ȯ
void swap(int* pa, int* pd);
int main(void)
{
	int a = 10, b = 20;

	swap(&a, &b);
	printf("a:%d, b:%d\n", a, b);

	return 0;
}
void swap(int* pa, int* pb)
{
	int temp;

	temp = *pa;
	*pa = *pb;
	*pb = temp;
}