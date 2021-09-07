#include <stdio.h>
// 2021년 4월 13일 화요일
// 작성자 : 이유빈
// 282p 예제 10-5 배열을 처리하는 함수

void print_ary(int* pa); // 함수 선언

int main(void)
{
	int ary[5] = { 10,20,30,40,50 };

	print_ary(ary);

	return 0;
}
void print_ary(int* pa)
{
	int i;

	for (i = 0; i < 5; i++)
	{
		printf("%d ",pa[i]);
	}
}