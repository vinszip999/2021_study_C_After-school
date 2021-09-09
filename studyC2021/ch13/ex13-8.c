#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
// 2021년 5월 27일 목요일
// 작성자 : 이유빈
// 376p 예제 13-8 주소를 반환하여 두 정수의 합 계산
int* sum(int a, int b);

int main(void)
{
	int* resp;

	resp = sum(10, 20);
	printf("두 정수의 합 : %d\n", *resp);

	return 0;
}

int* sum(int a, int b)
{
	static int res;

	res = a + b;

	return &res;
}