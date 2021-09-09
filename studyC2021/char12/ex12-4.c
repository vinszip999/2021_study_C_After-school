#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// 2021년 9월 9일 목요일
// 작성자 : 이유빈
// 325p 예제 12-4 gets 함수로 한 줄의 문자열 입력
int main(void)
{
	char str[80];

	printf("공백이 포함된 문자열 입력 : ");
	gets(str);
	printf("입력한 문자열은 %s입니다.", str);


	return 0;

}