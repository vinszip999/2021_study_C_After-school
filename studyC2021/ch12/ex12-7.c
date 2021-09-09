#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// 2021년 5월 11일 화요일
// 작성자 : 이유빈
// 331p 예제 12-7 문자열을 출력하는 puts와 fputs 함수

int main(void)
{
	char str[80] = "apple juice";
	char* ps = "banana";

	puts(str); // 출력하고 줄바꿈!!
	fputs(ps, stdout);
	puts("milk");

	return 0;

}