#include <stdio.h>
// 2021�� 9�� 7�� ȭ����
// �ۼ��� : ������
//  295p ���� 11-1 �빮�ڸ� �ҹ��ڷ� ����
int main(void)
{
	char small, cap = 'G';

	if ((cap >= 'A') && (cap <= 'Z'))
	{
		small = cap + ('a' - 'A');
	}
	printf("�빮�� : %c %c", cap, '\n'); // %d
	printf("�ҹ��� : %c", small);

	return 0;

}