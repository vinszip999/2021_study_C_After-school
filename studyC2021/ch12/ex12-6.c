#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// 2021�� 5�� 11�� ȭ����
// �ۼ��� : ������
// 329p ���� 12-6 ���� ���ڷ� ���� gets �Լ��� �Է��� ���ϴ� ���

int main(void)
{
	int age;
	char name[20];

	printf("���� �Է� : ");
	scanf("%d", &age);

	//getchar();

	printf("�̸� �Է� : ");
	gets(name);
	printf("���� : %d, �̸� : %s\n", age, name);

	return 0;

}