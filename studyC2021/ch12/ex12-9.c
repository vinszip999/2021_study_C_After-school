#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
// 2021�� 5�� 13�� ȭ����
// �ۼ��� : ������
// 340p ���� 12-9 strncpy �Լ��� ����� ���ڿ� ����

int main(void)
{
	char str[20] = "mango tree";

	strncpy(str, "apple-pie", 5);

	printf("%s\n", str);

	return 0;
}