#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
// 2021�� 6�� 3�� �����
// �ۼ��� : ������
// 427p 15-4 �ּҷ� ���̴� �迭��� �迭�� �ּ� ��
int main(void)
{
	int ary[5];

	printf("  ary�� �� : %u\t", ary);
	printf("ary�� �ּ� : %u\n", &ary);
	printf("  ary + 1 : %u\t", ary + 1);
	printf("  &ary + 1 : %u\n", &ary + 1);

	return 0;
}