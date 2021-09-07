#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
// 2021년 3월 30일 화요일 
// 작성자 : 이유빈
// 193p 7-2 매개변수가 없는 함수
int get_num(void);

int main(void)
{
	int result;

	result = get_num();
	printf("반환값 : %d\n", result);
	return 0;

}

int get_num(void)
{
	int num;

	printf("양수 입력 : ");
	scanf_s("%d", &num); // 중요!!* scanf -> scanf_s로 바꾸기!

	return num;
}