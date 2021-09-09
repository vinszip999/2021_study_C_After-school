#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
// 2021년 5월 13일 화요일
// 작성자 : 이유빈
// 340p 예제 12-9 strncpy 함수를 사용한 문자열 복사

int main(void)
{
	char str[20] = "mango tree";

	strncpy(str, "apple-pie", 5);

	printf("%s\n", str);

	return 0;
}