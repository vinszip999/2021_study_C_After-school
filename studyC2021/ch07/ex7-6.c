#include <stdio.h>
// 2021년 4월 1일 목요일 
// 작성자 : 이유빈
// 199p 3번 실행되는 재귀호출 함수
void fruit(int count);

int main(void)
{
	fruit(1);

	return 0;
}

void fruit(int count)
{
	printf("apple\n");
	if (count == 3) return;
	fruit(count + 1);
}