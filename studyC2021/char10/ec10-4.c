#include <stdio.h>
// 2021년 8월 31일 화요일
// 작성자 : 이유빈
// 275p 예제 10-4 포인터의 뺄셈과 관계 연산
int main(void)
{
	int ary[5] = { 10,20,30, 40, 50 };
	int* pa = ary;
	int* pb = pa + 3;

	printf("pa : %u/n", pa);
	printf("pb : %u/n", pb);
	pa++;
	printf("pb - pa : %u\n", pb - pa);

	printf("앞에 있는 배열 요소의 값 출력 : ");
	if (pa < pb) printf("%d\n", *pa);
	else printf("%d\n", *pb);

	return 0;

}