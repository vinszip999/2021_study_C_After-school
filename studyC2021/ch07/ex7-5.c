#include <stdio.h>
// 2021�� 4�� 1�� ����� 
// �ۼ��� : ������
// 198p ���ȣ�� �Լ�
void fruit(void);

int main(void)
{
	fruit();

	return 0;
}

void fruit(void)
{
	printf("apple\n");
	fruit();
}