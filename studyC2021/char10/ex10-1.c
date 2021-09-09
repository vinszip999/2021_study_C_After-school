#include <stdio.h>
// 2021년 8월 31일 화요일
// 작성자 : 이유빈
// 265p 예제 10-1 배열명에 정수 연산을 수행하여 배열 요소 사용
int main(void)
{
	int ary[3];
	int i;

	*(ary + 0) = 10;
	*(ary + 1) = *(ary + 0) + 10;

	printf("세 번째 배열 요소에 키보드 입력 : ");
	scanf_s("%d", ary + 2);

	for (i = 0; i < 3; i++)
	{
		printf("%5d", *(ary + i));
	}

	return 0;

}