#include <stdio.h>
// 2021�� 4�� 13�� ȭ����
// �ۼ��� : ������
// 282p ���� 10-5 �迭�� ó���ϴ� �Լ�

void print_ary(int* pa); // �Լ� ����

int main(void)
{
	int ary[5] = { 10,20,30,40,50 };

	print_ary(ary);

	return 0;
}
void print_ary(int* pa)
{
	int i;

	for (i = 0; i < 5; i++)
	{
		printf("%d ",pa[i]);
	}
}