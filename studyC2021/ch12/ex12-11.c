#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
// 2021�� 5�� 13�� ȭ����
// �ۼ��� : ������
// 343p ���� 12-11 �� ���ڿ� �� ���̰� �� �ܾ� ���

int main(void)
{
	char str1[80], str2[80];
	char* resp;

	printf("2���� ���� �̸� �Է� : ");
	scanf_s("%s%s", str1, str2);
	if (strlen(str1) > strlen(str2)) {
		resp = str1;
	}
	else {
		resp = str2;
		printf("�̸��� �� ������ : %s\n", resp);
	}

	return 0;
}