#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// 2021년 5월 11일 화요일
// 작성자 : 이유빈
// 326p 예제 12-5 fgets 함수의 문자열 입력 방법

int main(void)
{
	char str[80];

	printf("공백이 포함된 문자열 입력 : ");
	fgets(str, sizeof(str), stdin);
	//나중에 입력할 공간입니다.
	printf("입력된 문자열은 %s입니다.\n", str);
	// printf("개행문자를 뺀 문자열은 %s입니다.\n", str[strlen(str) - 1] = '\0');
	str[strlen(str) - 1] = '\0';
	printf("개행문자를 뺀 문자열은 %s입니다.\n", str);

	return 0;

}