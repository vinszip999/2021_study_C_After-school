#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// 2021�� 5�� 11�� ȭ����
// �ۼ��� : ������
// 319p ���� 12-1 ���ڿ� ����� �ּҶ� ����

int main(void)
{
	printf("apple�� ����� ���� �ּ� �� : %p\n", "apple");
	printf("�� ��° ������ �ּ� �� : %p\n", "apple" + 1);
	printf("ù ��° ���� : %c\n", *"apple");
	printf("�� ��° ���� : %c\n", *("apple" + 1));
	printf("�迭�� ǥ���� �� ��° ���� : %c\n", "apple"[2]);

	return 0;

}