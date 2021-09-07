#include <stdio.h>
/*
작성일 : 2021년 3월 16일 화요일
작성자 : 2414 이유빈
문자와 문저열 데이터의 출력
*/

int main(void)
{
	printf("%c\n", 'A');
	printf("%s\n", "A");
	printf("%c은 %s입니다.\n", '1', "first");

	return 0;
}

/*
int main(void)
{
	printf("%d\n", 10);
	printf("%lf\n", 3.4);
	printf("%.1lf\n", 3.45);
	printf("%.10lf\n", 3.4);

	printf("%d와 %d의 합은 %d입니다.\n", 10, 20, 10 + 20);
	printf("%.1lf - %.1lf = %.1lf\n", 3.4, 1.2, 3.4 - 1.2);
	return 0;
}
*/