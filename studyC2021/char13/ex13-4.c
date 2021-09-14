#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
// 2021년 9월 14일 화요일
// 작성자 : 이유빈
// 364p 예제 13-4 auto 지역 변수와 static 지역 변수의 비교
void auto_func(void);
void static_func(void);

int main(void)
{
	int i;

	printf("일반 지역 변수(auto)를 사용한 함수...\n");
	for (i = 0; i < 3; i++)
	{
		auto_func();
	}

	printf("정적 지역 변수(static)를 사용한 함수...\n");
	for (i = 0; i < 3; i++)
	{
		static_func();
	}

	return 0;
}

void auto_func(void)
{
	auto int a = 0;

	a++;
	printf("%d\n", a);
}

void static_func(void)
{
	static int a;

	a++;
	printf("%d\n", a);
}