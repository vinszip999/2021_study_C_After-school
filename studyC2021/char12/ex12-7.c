#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// 2021�� 9�� 9�� �����
// �ۼ��� : ������
// 331p ���� 12-7 ���ڿ��� ����ϴ� puts�� fputs �Լ�

int main(void)
{
	char str[80] = "apple juice";
	char* ps = "banana";

	puts(str); // ����ϰ� �ٹٲ�!!
	fputs(ps, stdout); // stdout���� puts���� �Է¹��� ���� ����ϱ�
	puts("milk");

	return 0;
	//gets�� �Է�, puts�� ���.
}