#include <stdio.h>
// 2021년 8월 24일 화요일
// 작성자 : 이유빈
// 236p 예제 9-1 변수의 메모리 주소 확인
int main(void)
{
	int a;
	double b;
	char c;

	printf("int형 변수의 주소 : %u\n", &a);
	printf("double형 변수의 주소 : %u\n", &b);
	printf("char형 변수의 주소 : %u\n", &c);

	return 0;

}