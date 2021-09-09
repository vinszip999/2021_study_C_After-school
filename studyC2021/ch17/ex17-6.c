#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
// 2021년 6월 10일 목요일
// 작성자 : 이유빈
// 493p 17-6 구조체 포인터의 사용
struct score
{
	int kor;
	int eng;
	int math;
};
int main(void)
{
	struct score yuni = { 90, 80, 70 };
	struct score* ps = &yuni;

	printf("국어 : %d\n", (*ps).kor);
	printf("영어 : %d\n", ps->eng);
	printf("수학 : %d\n", ps->math);

	return 0;
}