#include <stdio.h>
#include <string.h>
// 2021�� 4�� 6�� ȭ���� 
// �ۼ��� : ������
// ���ڿ��� �����ϴ� strcpy �Լ�

int main(void)
{
	char str1[80] = "cat";
	char str2[80];

	//str1 = "tiger"
	strcpy(str1, "tiger");
	strcpy(str2, str1);
	printf("%s, %s\n", str1, str2);

	return 0;
}
