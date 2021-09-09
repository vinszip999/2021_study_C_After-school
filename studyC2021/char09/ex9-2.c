#include <stdio.h>
// 2021년 8월 24일 화요일
// 작성자 : 이유빈
// 238p 예제 9-2 포인터의 선언과 사용
int main(void)
{
	int a; // 일반 변수 선언
	int* pa; // 포인터 선언

	pa = &a;
	*pa = 10;

	printf("포인터로 a 값 출력 : %d\n", *pa);
	printf("변수명으로 a 값 출력 : %d\n", a); // 변수 a 값 출력

	return 0;

}