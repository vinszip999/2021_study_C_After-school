#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
// 2021년 4월 6일 화요일 
// 작성자 : 이유빈
// 231쪽 3번문제 

int main(void)
{
	char str1[80], str2[80];
	char temp[80];

	printf("두 문자열 입력 : "); // 입력 안내 메세지 출력
	scanf_s("%s %s", str1, str2);
	printf("바꾸기 전 : %s, %s\n", str1, str2);
	strcpy(temp, str2);
	strcpy(str2, str1);
	strcpy(str1, temp);
	printf("바꾼 후 : %s, %s\n", str1, str2);
}