#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
// 2021년 6월 8일 화요일
// 작성자 : 이유빈
// 481p 17-2 배열과 포인터를 멤버로 갖는 구조체 사용
struct profile
{
	char name[20];
	int age;
	double height;
	char* intro;
};

int main(void)
{
	struct profile yuni;

	strcpy(yuni.name, "서하윤");
	yuni.age = 17;
	yuni.height = 164.5;

	yuni.intro = (char*)malloc(80);
	printf("자기소개 : ");
	gets(yuni.intro);

	printf("이름 : %s\n", yuni.name);
	printf("나이 : %d\n", yuni.age);
	printf("키 : %.1lf\n", yuni.height);
	printf("자기소개 : %s\n", yuni.intro);
	free(yuni.intro);

	return 0;
}