#include <stdio.h>
// 2021년 4월 6일 화요일 
// 작성자 : 이유빈
// 문자열을 저장하는 char형 배열
int main(void)
{
	char str[80] = "applejam";

	printf("최초 문자열 : %s\n", str);
	printf("문자열 입력 : ");
	scanf_s("%s", str);
	printf("입력 후 문자열 : %s\n", str);

	return 0;
}