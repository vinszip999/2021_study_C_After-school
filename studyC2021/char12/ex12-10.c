#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
// 2021년 9월 9일 목요일
// 작성자 : 이유빈
// 341p 예제 12-10 strcat, strncat 함수를 사용한 문자열 붙이기

int main(void)
{
	char str[80] = "straw";

	strcat(str, "berry");
	printf("%s\n", str);
	strncat(str, "piece", 3);
	printf("%s\n", str);

	return 0;
}