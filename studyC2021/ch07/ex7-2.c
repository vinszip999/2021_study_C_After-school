#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
// 2021�� 3�� 30�� ȭ���� 
// �ۼ��� : ������
// 193p 7-2 �Ű������� ���� �Լ�
int get_num(void);

int main(void)
{
	int result;

	result = get_num();
	printf("��ȯ�� : %d\n", result);
	return 0;

}

int get_num(void)
{
	int num;

	printf("��� �Է� : ");
	scanf_s("%d", &num); // �߿�!!* scanf -> scanf_s�� �ٲٱ�!

	return num;
}