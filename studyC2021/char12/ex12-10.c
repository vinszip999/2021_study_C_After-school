#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
// 2021�� 9�� 9�� �����
// �ۼ��� : ������
// 341p ���� 12-10 strcat, strncat �Լ��� ����� ���ڿ� ���̱�

int main(void)
{
	char str[80] = "straw";

	strcat(str, "berry");
	printf("%s\n", str);
	strncat(str, "piece", 3);
	printf("%s\n", str);

	return 0;
}