#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
// 2021년 6월 8일 화요일
// 작성자 : 이유빈
// 436p 확인문제 1번
int main(void)
{
	double grade = 4.5;
	double* pg = &grade;
	double** ppg = &pg;

	printf("%.11f/n", **ppg); // 4.5
	printf("%u\n", &ppg); // 300번지
	printf("%u\n", *&pg); // 100번지
	printf("%u\n", *ppg); // 100번지
	printf("%u\n", &*ppg); // 200번지

	return 0;
}