#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// 2021�� 5�� 11�� ȭ����
// �ۼ��� : ������
// 326p ���� 12-5 fgets �Լ��� ���ڿ� �Է� ���

int main(void)
{
	char str[80];

	printf("������ ���Ե� ���ڿ� �Է� : ");
	fgets(str, sizeof(str), stdin);
	//���߿� �Է��� �����Դϴ�.
	printf("�Էµ� ���ڿ��� %s�Դϴ�.\n", str);
	// printf("���๮�ڸ� �� ���ڿ��� %s�Դϴ�.\n", str[strlen(str) - 1] = '\0');
	str[strlen(str) - 1] = '\0';
	printf("���๮�ڸ� �� ���ڿ��� %s�Դϴ�.\n", str);

	return 0;

}