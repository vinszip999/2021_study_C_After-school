#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// 2021�� 9�� 9�� �����
// �ۼ��� : ������
// 325p ���� 12-4 gets �Լ��� �� ���� ���ڿ� �Է�
int main(void)
{
	char str[80];

	printf("������ ���Ե� ���ڿ� �Է� : ");
	gets(str);
	printf("�Է��� ���ڿ��� %s�Դϴ�.", str);


	return 0;

}