#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
// 2021�� 5�� 13�� ȭ����
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
	printf("�ٲ� ���ڿ� : %s\n", str1);

	strcpy(str1, ps1); // ���ڿ� ����� ������ ������ ���
	printf("�ٲ� ���ڿ� : %s\n", str1);

	strcpy(str1, ps2); // �迭�� ������ ������ ���
	printf("�ٲ� ���ڿ� : %s\n", str1);

	strcpy(str1, "banana"); //���ڿ� ��� ���
	printf("�ٲ� ���ڿ� : %s\n", str1);

	return 0;

}