#include <stdio.h>
// 2021년 4월 8일 목요일
// 작성자 : 이유빈
// 254p 예제 9-7 포인터를 사용한 두 변수의 값 교환
void swap(int* pa, int* pd);
int main(void)
{
	int a = 10, b = 20;

	swap(&a, &b);
	printf("a:%d, b:%d\n", a, b);

	return 0;
}
void swap(int* pa, int* pb)
{
	int temp;

	temp = *pa;
	*pa = *pb;
	*pb = temp;
}