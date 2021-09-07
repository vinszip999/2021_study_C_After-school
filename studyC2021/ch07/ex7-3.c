#include <stdio.h>
// 2021년 3월 30일 화요일 
// 작성자 : 이유빈
// 195~196p 7-3 반환값이 없는 함수
void print_char(char ch, int count);

int main(void)
{
	print_char('@', 5);

	return 0;
}

void print_char(char ch, int count)
{
	int i;

	for (i = 0; i < count; i++)
	{
		printf("%c", ch);
	}
	return;
}