#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
// 2021�� 4�� 6�� ȭ���� 
// �ۼ��� : ������
// 231�� 3������ 

int main(void)
{
	char str1[80], str2[80];
	char temp[80];

	printf("�� ���ڿ� �Է� : "); // �Է� �ȳ� �޼��� ���
	scanf_s("%s %s", str1, str2);
	printf("�ٲٱ� �� : %s, %s\n", str1, str2);
	strcpy(temp, str2);
	strcpy(str2, str1);
	strcpy(str1, temp);
	printf("�ٲ� �� : %s, %s\n", str1, str2);
}