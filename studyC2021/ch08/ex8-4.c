#include <stdio.h>
// 2021�� 4�� 6�� ȭ���� 
// �ۼ��� : ������
// ���ڿ��� �����ϴ� char�� �迭
int main(void)
{
	char str[80] = "applejam";

	printf("���� ���ڿ� : %s\n", str);
	printf("���ڿ� �Է� : ");
	scanf_s("%s", str);
	printf("�Է� �� ���ڿ� : %s\n", str);

	return 0;
}