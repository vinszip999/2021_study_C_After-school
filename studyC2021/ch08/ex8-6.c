#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// 2021�� 4�� 6�� ȭ���� 
// �ۼ��� : ������
// ��ĭ�� ������ ���ڿ� �Է�

int main(void)
{
	char str[80];
	
	printf("���ڿ� �Է� : ");
	gets(str);
	puts("�Էµ� ���ڿ� : "); // ���
	puts(str);

	return 0;
}
