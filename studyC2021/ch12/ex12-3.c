#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// 2021�� 5�� 11�� ȭ����
// �ۼ��� : ������
// 323p ���� 12-3 scanf �Լ��� ����� ���ڿ� �Է�

int main(void)
{
	char str[80];

	printf("���ڿ� �Է� : ");
	scanf("%s", str);
	printf("ù ��° �ܾ� : %s\n", str);
	scanf("%s", str);
	printf("���ۿ� ���� �ִ� �� ��° �ܾ� : %s\n", str);


	return 0;

}