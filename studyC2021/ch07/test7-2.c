#include <stdio.h>
// 2021년 4월 1일 목요일 
// 작성자 : 이유빈
// 204p 확인문제 2번
void sum(int n);
int main(void)
{
	sum(10);
	sum(100);

	return 0;
}
void sum(int n)
{
	int hap = 0;

	for (int i = 1; i <= n; i++)
	{
		hap += i;
	}
	printf("1부터 %d까지의 합은 %d입니다.\n", n, hap);
}