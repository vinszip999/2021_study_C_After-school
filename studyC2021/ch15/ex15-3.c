#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
// 2021�� 6�� 13 �����
// �ۼ��� : ������
// 425p 15-3 ������ �迭�� ���� ����ϴ� �Լ�
void print_str(char** pps, int cnt);

int main(void)
{
	char* ptr_ary[] = { "eagle", "tiger", "lion", "squirrel" };
	int count;

	count = sizeof(ptr_ary) / sizeof(ptr_ary[0]);
	print_str(ptr_ary, count);

	return 0;
}

void print_str(char** pps, int cnt)
{
	int i;

	for (i = 0; i < cnt; i++)
	{
		printf("%s\n", pps[i]);
	}
}