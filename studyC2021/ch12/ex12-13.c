#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// 2021년 5월 13일 화요일
// 작성자 : 이유빈
// 347p 예제 12-13 strcpy와 기능이 같은 함수의 구현
char* my_strcpy(char* pd, char* ps);

int main(void)
{
	char str[80] = "strawberry";

	printf("바꾸기 전 문자열 : %s\n", str);


	return 0;
}