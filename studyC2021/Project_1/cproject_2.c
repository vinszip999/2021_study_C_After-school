#include <stdio.h>

// ������ �Էµ� �ݾ��� �ѱ۷� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
// 2145300 => �̹��Ͻʻ縸��õ����

// 1�ܰ�
//�Էµ� ���ڸ� 4�ڸ��� ������ ��, ��, �� ������ ���
//ex) 123456789 -> 1��2345��6789��

// 2�ܰ�
//4�ڸ��� �������� ���ڿ� ���� õ����, �����, �ʴ����� �����Ͽ� ���
//ex) 123456789 -> 1��2õ3��4��5��6õ7��8��9��

// 3�ܰ�
//2�ܰ迡 �ִ� ���ڸ� �ѱ۷� ��ȯ

void number_to_hangul(unsigned long money);
void won_to_dollar(unsigned long money);

int main(void)
{
	unsigned long money;
	printf("�ݾ��� �Է��ϰ� Enter> ");
	scanf_s("%ld", &money);
	printf("\n<ȭ�����>\n");
	number_to_hangul(money);
	won_to_dollar(money);

	return 0;
}

void won_to_dollar(unsigned long money)
{
	double sum = money / 1189.00;
	printf("%.2lf�� �Դϴ�.", sum);
	//1189.00 won/1 dollar
}

void number_to_hangul(unsigned long money)
{
	unsigned long num1, num2, temp;
	unsigned long m_unit[] = { 100000000, 10000, 1 };
	unsigned long m_unit01[] = { 1000, 100, 10 };

	int i, j;
	char* unit01[] = { "��", "��", "��" };
	char* unit02[] = { "õ", "��", "��" };
	char* unit03[] = { " ", "��", "��", "��", "��", "��", "��", "ĥ", "��", "��" };
	
	for (i = 0; i < 3; i++)
	{
		num1 = money / m_unit[i];
		if (!num1) continue;
		temp = num1;
		for (j = 0; j < 3; j++)
		{
			num2 = num1 / m_unit01[j];
			if (!num2) continue;
			printf("%s%s ", unit03[num2], unit02[j]);
			num1 = num1 - num2 * m_unit01[j];

		}
		printf("%s%s ", unit03[num1], unit01[i]);
		money = money - temp * m_unit[i];
	}
	printf("\n");
}