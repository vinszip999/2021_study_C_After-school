#include <stdio.h>
// 2021�� 4�� 13�� ȭ����
// �ۼ��� : ������
// 271p ���� 10-3 �����͸� �̿��� �迭�� �� ���
int main(void)
{
	int ary[3] = { 10,20,30 };
	int* pa = ary + 2;
	int i;

	printf("�迭�� �� : ");
	for (i = 0; i < 3; i++) // ��� �迭 ��� ���
	{
		
		printf("%5d", *pa);
		pa = pa - 1;
	}

	return 0;

}