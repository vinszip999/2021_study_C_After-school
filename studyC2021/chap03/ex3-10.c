#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 작성일 : 2021년 3월 18일 목요일
// 작성자 : 이유빈

int main(void)
{
	int age;
	double height;

	printf("나이와 키를 입력하세요 : ");
	scanf("%d%lf", &age, &height);
	printf("나이는 %d살, 키는 %.1lfcm입니다\n", age, height);

	return 0;
}