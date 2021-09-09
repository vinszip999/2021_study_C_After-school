#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
// 2021년 6월 13 목요일
// 작성자 : 이유빈
// 417p 15-1 포인터와 이중 포인터의 관계
int main(void)
{
	int a = 10;
	int* pi;
	int** ppi;

	pi = &a;
	ppi = &pi;

	printf("---------------------------------\n");
	printf("변수	변숫값	   &연산	 **연산\n");
	printf("---------------------------------\n");
	printf("a%10d%10u\n", a, &a);
	printf("pi%10u%10u%10d\n", pi, &pi, *pi);
	printf("ppi%10u%10u%10u%10u\n", ppi, &ppi, *ppi, **ppi);
	printf("----------------------------------\n");

	return 0;
}