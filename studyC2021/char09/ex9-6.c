#include <stdio.h>
// 2021년 8월 26일 목요일
// 작성자 : 이유빈
// 251p 예제 9-6 허용되지 않는 포인터의 대입
int main(void)
{
	int a = 10;
	int* p = &a;
	double* pd;

	pd = p;
	printf("%lf\n", *pd);


	return 0;
}