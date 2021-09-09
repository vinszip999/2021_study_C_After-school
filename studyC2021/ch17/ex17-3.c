#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
// 2021년 6월 10일 목요일
// 작성자 : 이유빈
// 483p 17-3 다른 구조체를 멤버로 갖는 구조체 사용
struct profile
{
	int age;
	double height;
};
struct student
{
	struct profile pf;
	int id;
	double grade;
};
int main(void)
{
	struct student yuni;

	yuni.pf.age = 17;
	yuni.pf.height = 164.5;
	yuni.id = 315;
	yuni.grade = 4.3;

	printf("나이 : %d\n", yuni.pf.age);
	printf("키 : %1lf\n", yuni.pf.height);
	printf("학번 : %d\n", yuni.id);
	printf("학점 : %1lf\n", yuni.grade);

	return 0;
}