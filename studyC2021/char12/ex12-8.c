#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
// 2021�� 9�� 9�� �����
// �ۼ��� : ������
// 337p ���� 12-8 strcpy �Լ��� ����

int main(void)
{
	char str1[80] = "strawberry";
	char str2[80] = "apple";
	char* ps1 = "banana";
	char* ps2 = str2;

	printf("���� ���ڿ� : %s\n", str1);
	strcpy(str1, str2); // �ٸ� char �迭�� ���ڿ� ����
	// str2�� �ִ� ���ڿ� ���� str1���� �����ؼ� �ִ´�.

	return 0;

}