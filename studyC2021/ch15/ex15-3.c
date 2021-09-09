#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
// 2021년 6월 13 목요일
// 작성자 : 이유빈
// 425p 15-3 포인터 배열의 값을 출력하는 함수
void print_str(char** pps, int cnt);

int main(void)
{
	char* ptr_ary[] = { "eagle", "tiger", "lion", "squirrel" };
	int count;

	count = sizeof(ptr_ary) / sizeof(ptr_ary[0]);
	print_str(ptr_ary, count);

	return 0;
}

void print_str(char** pps, int cnt)
{
	int i;

	for (i = 0; i < cnt; i++)
	{
		printf("%s\n", pps[i]);
	}
}