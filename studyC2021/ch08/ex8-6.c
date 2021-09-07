#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// 2021년 4월 6일 화요일 
// 작성자 : 이유빈
// 빈칸을 포함한 문자열 입력

int main(void)
{
	char str[80];
	
	printf("문자열 입력 : ");
	gets(str);
	puts("입력된 문자열 : "); // 출력
	puts(str);

	return 0;
}
