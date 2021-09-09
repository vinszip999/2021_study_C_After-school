#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
// 2021년 6월 8일 화요일
// 작성자 : 이유빈
// 477p 17-1 구조체를 선언하고 멤버를 사용하는 방법

struct student
{
	int num;
	double grade;
};
int main(void)
{
	struct student s1;

	s1.num = 2;
	s1.grade = 2.7;
	printf("학번 : %d\n", s1.num);
	printf("학점 : %.1lf\n", s1.grade);

	return 0;
}