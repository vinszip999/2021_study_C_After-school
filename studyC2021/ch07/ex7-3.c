#include <stdio.h>
// 2021�� 3�� 30�� ȭ���� 
// �ۼ��� : ������
// 195~196p 7-3 ��ȯ���� ���� �Լ�
void print_char(char ch, int count);

int main(void)
{
	print_char('@', 5);

	return 0;
}

void print_char(char ch, int count)
{
	int i;

	for (i = 0; i < count; i++)
	{
		printf("%c", ch);
	}
	return;
}