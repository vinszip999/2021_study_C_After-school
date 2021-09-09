#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
// 2021년 5월 25일 화요일
// 작성자 : 이유빈
// 357p 예제 13-1 두 함수에서 같은 이름의 지역 변수를 사용한 경우
void assign(void);

int main(void)
{
	auto int a = 0;

	assign();
	printf("main 함수 a : %d\n", a);

	return 0;
}

void assign(void)
{
	int a;

	a = 10;
	printf("assign 함수 a : %d\n", a);
}