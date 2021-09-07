#include <stdio.h>
// 2021년 4월 1일 목요일 
// 작성자 : 이유빈
// 209p 5명의 나이를 저장할 배열을 선언하고 사용하는 방법
int main(void)
{
	int ary[5];

	ary[0] = 10;
	ary[1] = 20;
	ary[2] = ary[0] + ary[1];
	scanf_s("%d", &ary[3]);

	printf("%d\n", ary[2]);
	printf("%d\n", ary[3]);
	printf("%d\n", ary[4]);

	return 0;
}