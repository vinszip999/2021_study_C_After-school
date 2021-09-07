#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// 2021년 4월 6일 화요일 
// 작성자 : 이유빈
// 변수의 메모리 주소 확인

int main(void)
{
	int a;
	double b;
	char c;

	printf("int형 변수의 주소 : %p\n", &a); // 주소 연산자로 주소 출력
	printf("double형 변수의 주소 : %p\n", &b);
	printf("char형 변수의 주소 : %p\n", &c);

	return 0;
}