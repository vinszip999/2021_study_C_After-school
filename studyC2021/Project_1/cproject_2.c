#include <stdio.h>

// 정수로 입력된 금액을 한글로 출력하는 프로그램을 작성하시오.
// 2145300 => 이백일십사만오천삼백원

// 1단계
//입력된 숫자를 4자리씩 나누어 억, 만, 원 단위로 출력
//ex) 123456789 -> 1억2345만6789원

// 2단계
//4자리씩 나누어진 숫자에 대한 천단위, 백단위, 십단위로 구분하여 출력
//ex) 123456789 -> 1억2천3백4십5만6천7백8십9원

// 3단계
//2단계에 있던 숫자를 한글로 변환

void number_to_hangul(unsigned long money);
void won_to_dollar(unsigned long money);

int main(void)
{
	unsigned long money;
	printf("금액을 입력하고 Enter> ");
	scanf_s("%ld", &money);
	printf("\n<화폐단위>\n");
	number_to_hangul(money);
	won_to_dollar(money);

	return 0;
}

void won_to_dollar(unsigned long money)
{
	double sum = money / 1189.00;
	printf("%.2lf원 입니다.", sum);
	//1189.00 won/1 dollar
}

void number_to_hangul(unsigned long money)
{
	unsigned long num1, num2, temp;
	unsigned long m_unit[] = { 100000000, 10000, 1 };
	unsigned long m_unit01[] = { 1000, 100, 10 };

	int i, j;
	char* unit01[] = { "억", "만", "원" };
	char* unit02[] = { "천", "백", "십" };
	char* unit03[] = { " ", "일", "이", "삼", "사", "오", "육", "칠", "팔", "구" };
	
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