#include <stdio.h>
// 2021년 8월 31일 화요일
// 작성자 : 이유빈
// 265p 예제 10-1-1 3개의 요소를 사용자 입력 받도록 수정해보세오
int main(void)
{
	int ary[3];
	int i;

	*(ary + 0) = 10;
	*(ary + 1) = *(ary + 0) + 10;

	printf("세 번째 배열 요소에 키보드 입력 : ");
	for (i = 0; i < 3; i++) {
		scanf_s("%d", ary + i);
	}

	for (i = 0; i < 3; i++)
	{
		printf("%5d", *(ary + i));
		printf("%5d", ary[i]);
	}

	return 0;

}