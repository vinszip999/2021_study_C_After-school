#include <stdio.h>
// 2021�� 8�� 31�� ȭ����
// �ۼ��� : ������
// 271p ���� 10-3 �����͸� �̿��� �迭�� �� ���
int main(void)
{
	int ary[3] = { 10,20,30 };
	int* pa = ary;
	int i;

	printf("�迭�� �� : ");
	for (i = 0; i < 3; i++) // ��� �迭 ��� ���
	{

		printf("%5d", *pa);
		pa++;
	}

	return 0;

}