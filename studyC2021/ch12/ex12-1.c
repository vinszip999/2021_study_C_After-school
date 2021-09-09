#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// 2021년 5월 11일 화요일
// 작성자 : 이유빈
// 319p 예제 12-1 문자열 상수가 주소란 증거

int main(void)
{
	printf("apple이 저장된 시작 주소 값 : %p\n", "apple");
	printf("두 번째 문자의 주소 값 : %p\n", "apple" + 1);
	printf("첫 번째 문자 : %c\n", *"apple");
	printf("두 번째 문자 : %c\n", *("apple" + 1));
	printf("배열로 표현한 세 번째 문자 : %c\n", "apple"[2]);

	return 0;

}