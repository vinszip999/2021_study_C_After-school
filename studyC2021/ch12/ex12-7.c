#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// 2021�� 5�� 11�� ȭ����
// �ۼ��� : ������
// 331p ���� 12-7 ���ڿ��� ����ϴ� puts�� fputs �Լ�

int main(void)
{
	char str[80] = "apple juice";
	char* ps = "banana";

	puts(str); // ����ϰ� �ٹٲ�!!
	fputs(ps, stdout);
	puts("milk");

	return 0;

}