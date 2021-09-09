#include <stdio.h>
// 2021년 8월 31일 화요일
// 작성자 : 이유빈
// 271p 예제 10-3 포인터를 이용한 배열의 값 출력
int main(void)
{
	int ary[3] = { 10,20,30 };
	int* pa = ary;
	int i;

	printf("배열의 값 : ");
	for (i = 0; i < 3; i++) // 모든 배열 요소 출력
	{

		printf("%5d", *pa);
		pa++;
	}

	return 0;

}