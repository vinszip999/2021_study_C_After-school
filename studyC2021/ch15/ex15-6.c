#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
// 2021�� 6�� 8�� ȭ����
// �ۼ��� : ������
// 431p 15-6 2���� �迭�� ���� ����ϴ� �Լ�
void print_ary(int(*)[4]);

int main(void)
{
	int ary[3][4] = { {1,2,3,4}, {5,6,7,8}, {9,10,11,12} };

	print_ary(ary);

	return 0;
}

void print_ary(int(*pa)[4])
{
	int i, j;

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
		{
			printf("%5d", pa[i][j]);
		}
		printf("\n");
	}
}