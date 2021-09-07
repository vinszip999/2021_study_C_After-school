#include <stdio.h>
// 2021년 4월 8일 목요일
// 작성자 : 이유빈
// 241p 예제 9-3 포인터를 사용한 두 정수의 합과 평균 계산
int main(void)
{
	int a = 10, b = 15, total;
	double avg;
	int *pa, *pb;
	int *pt = &total;
	double *pg = &avg;

	pa = &a;
	pb = &b;

	*pt = *pa + *pb;
	*pg = *pt / 2.0;

	printf("두 정수의 값 : %d, %d\n", *pa, *pb);
	printf("두 정수의 합 : %d\n", *pt);
	printf("두 정수의 평균 : %.1lf\n", *pg);

	return 0;
}