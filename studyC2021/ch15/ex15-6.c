#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
// 2021년 6월 8일 화요일
// 작성자 : 이유빈
// 431p 15-6 2차원 배열의 값을 출력하는 함수
void print_ary(int(*)[4]);

int main(void)
{
	int ary[3][4] = { {1,2,3,4}, {5,6,7,8}, {9,10,11,12} };

	print_ary(ary);

	return 0;
}

void print_ary(int(*pa)[4])
{
	int i, j;

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
		{
			printf("%5d", pa[i][j]);
		}
		printf("\n");
	}
}