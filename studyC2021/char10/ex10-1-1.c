#include <stdio.h>
// 2021�� 8�� 31�� ȭ����
// �ۼ��� : ������
// 265p ���� 10-1-1 3���� ��Ҹ� ����� �Է� �޵��� �����غ�����
int main(void)
{
	int ary[3];
	int i;

	*(ary + 0) = 10;
	*(ary + 1) = *(ary + 0) + 10;

	printf("�� ��° �迭 ��ҿ� Ű���� �Է� : ");
	for (i = 0; i < 3; i++) {
		scanf_s("%d", ary + i);
	}

	for (i = 0; i < 3; i++)
	{
		printf("%5d", *(ary + i));
		printf("%5d", ary[i]);
	}

	return 0;

}