#include <stdio.h>
// 2021�� 4�� 13�� ȭ����
// �ۼ��� : ������
// 268p ���� 10-2 �迭��ó�� ���Ǵ� ������
int main(void)
{
	int ary[3];
	int* pa = ary;
	int i;

	*pa = 10;
	*(pa + 1) = 20;
	pa[2] = pa[0] + pa[1];

	for (i = 0; i < 3; i++)
	{
		printf("%5d", pa[i]);
	}

	return 0;

}