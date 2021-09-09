#include <stdio.h>
// 2021년 9월 7일 화요일
// 작성자 : 이유빈
// 300p 예제 11-3 getchar 함수와 putchar 함수 사용

int main(void)
{
	int ch;

	ch = getchar();
	printf("입력한 문자 : ");
	putchar(ch);
	putchar('\n');

	return 0;
}