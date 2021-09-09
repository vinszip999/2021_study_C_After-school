#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
// 2021년 6월 13 목요일
// 작성자 : 이유빈
// 422p 15-2 이중 포인터를 사용한 포인터 교환
void swap_ptr(char** ppa, char** ppb);

int main(void)
{
	char* pa = "success";
	char* pb = "failure";

	printf("pa -> %s, pb -> %s\n", pa, pb);
	swap_ptr(&pa, &pb);
	printf("pa -> %s, pb -> %s\n", pa, pb);

	return 0;
}

void swap_ptr(char** ppa, char** ppb)
{
	char* pt;
	pt = *ppa;
	*ppa = *ppb;
	*ppb = pt;
}