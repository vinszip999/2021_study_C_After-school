#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// 2021년 5월 11일 화요일
// 작성자 : 이유빈
// 329p 예제 12-6 개행 문자로 인해 gets 함수가 입력을 못하는 경우

int main(void)
{
	int age;
	char name[20];

	printf("나이 입력 : ");
	scanf("%d", &age);

	//getchar();

	printf("이름 입력 : ");
	gets(name);
	printf("나이 : %d, 이름 : %s\n", age, name);

	return 0;

}