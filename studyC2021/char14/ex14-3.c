#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
// 2021년 9월 23일 목요일
// 작성자 : 이유빈
// 393p 여러 개의 동물 이름을 입출력하는 프로그램

int main(void)
{
	char animal[5][20];
	int i;
	int count;

	count = sizeof(animal) / sizeof(animal[0]); // 5*20 = 100 이니까 100 / 20 = 5   count = 5
	for (i = 0; i < count; i++) // i<5; 즉, i는 0,1,2,3,4 까지
	{
		scanf_s("%s", animal[0]);
	}

	for (i = 0; i < count; i++)
	{
		printf("%s", animal[i]);
	}

	return 0;

}