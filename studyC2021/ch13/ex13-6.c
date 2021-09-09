#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
// 2021년 5월 25일 화요일
// 작성자 : 이유빈
// 372p 예제 13-6 10을 더하기 위해 값을 인수로 주는 경우
void add_ten(int a);

int main(void)
{
	int a = 10;

	add_ten(a);
	printf("a : %d\n", a);

	return 0;
}

void add_ten(int a)
{
	a = a + 10;
}