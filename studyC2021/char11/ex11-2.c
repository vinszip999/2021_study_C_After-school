#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// 2021년 9월 7일 화요일
// 작성자 : 이유빈
// 297p 예제 11-2 공백이나 제어 문자의 입력

int main(void)
{
	char ch1, ch2;

	scanf(" %c %c", &ch1, &ch2); // 문자들만 입력 받음 (화이트 스페이스)
	printf("[%c%c]", ch1, ch2);

	return 0;
}