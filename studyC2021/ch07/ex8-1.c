#include <stdio.h>
// 2021�� 4�� 1�� ����� 
// �ۼ��� : ������
// 209p 5���� ���̸� ������ �迭�� �����ϰ� ����ϴ� ���
int main(void)
{
	int ary[5];

	ary[0] = 10;
	ary[1] = 20;
	ary[2] = ary[0] + ary[1];
	scanf_s("%d", &ary[3]);

	printf("%d\n", ary[2]);
	printf("%d\n", ary[3]);
	printf("%d\n", ary[4]);

	return 0;
}