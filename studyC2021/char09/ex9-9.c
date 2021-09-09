#include <stdio.h>
// 2021년 8월 26일 목요일
// 작성자 : 이유빈
// 258p 예제 9-9 변수의 값을 인수로 주는 경우
void swap(int x, int y);

int main(void)
{
	int a = 10, b = 20;

	swap(a, b);
	printf("a:%d, b:%d\n", a, b);

	return 0;
}

void swap(int x, int y)
{
	int temp;

	temp = x;
	x = y;
	y = temp;
}