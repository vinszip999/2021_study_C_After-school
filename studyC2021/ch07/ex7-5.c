#include <stdio.h>
// 2021년 4월 1일 목요일 
// 작성자 : 이유빈
// 198p 재귀호출 함수
void fruit(void);

int main(void)
{
	fruit();

	return 0;
}

void fruit(void)
{
	printf("apple\n");
	fruit();
}