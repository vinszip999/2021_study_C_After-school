#include <stdio.h>
// 2021�� 8�� 26�� �����
// �ۼ��� : ������
// 258p ���� 9-9 ������ ���� �μ��� �ִ� ���
void swap(int x, int y);

int main(void)
{
	int a = 10, b = 20;

	swap(a, b);
	printf("a:%d, b:%d\n", a, b);

	return 0;
}

void swap(int x, int y)
{
	int temp;

	temp = x;
	x = y;
	y = temp;
}