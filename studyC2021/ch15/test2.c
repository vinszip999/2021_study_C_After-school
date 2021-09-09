#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
// 2021년 6월 8일 화요일
// 작성자 : 이유빈
// 437p 확인문제 2번
int main(void)
{
	int a = 10, b = 20;
	int* pa = &a, * pb = &b;
	int** ppa = &pa, ** ppb = &pb;
	int* pt;

	pt = *ppa;
	*ppa = *ppb;
	*ppb = pt;
	
	printf("a:%d, b:%d\n", a, b);
	printf("*pa:%d, *pb:%d\n", *pa, *pb);

	return 0;
}