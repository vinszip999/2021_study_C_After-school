#include <stdio.h>

// 작성일 : 2021년 3월 18일 목요일
// 작성자 : 이유빈

int main(void)
{
	int income = 0;
	double tax;
	const double tax_rate = 0.12;

	income = 456;
	tax = income * tax_rate;
	printf("세금은 : %.1lf입니다.\n", tax);

	return 0;
}