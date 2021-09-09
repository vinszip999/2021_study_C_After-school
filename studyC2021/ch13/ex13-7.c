#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
// 2021년 5월 25일 화요일
// 작성자 : 이유빈
// 374p 예제 13-7 포인터를 써서 변수의 값에 10을 더하는 경우
void add_ten(int* pa);

int main(void)
{
	int a = 10;

	add_ten(&a);
	print("a : %d\n", a);

	return 0;
}

void add_ten(int* pa)
{
	*pa = *pa + 10;
}