#include <stdio.h>
// 2021년 4월 8일 목요일
// 작성자 : 이유빈
// 244p 예제 9-4 포인터에 const 사용
int main(void)
{
	int a = 10, b = 20;
	const int* pa = &a;

	printf("변수 a 값 : %d\n", *pa);
	pa = &b;
	printf("변수 b 값 : %d\n", *pa);
	pa = &a;
	a = 20;
	printf("변수 a 값 : %d\n", *pa);


	return 0;
}