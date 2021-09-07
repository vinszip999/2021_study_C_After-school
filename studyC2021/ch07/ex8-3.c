#include <stdio.h>
// 2021년 4월 1일 목요일 
// 작성자 : 이유빈
// 216p sizeof 연산자를 사용한 배열
int main(void)
{
	int score[5];
	int i;
	int total = 0;
	double avg;
	int count;
	count = sizeof(score) / sizeof(score[0]);

	for (i = 0; i < count; i++)
	{
		scanf_s("%d", &score[i]);
	}

	for (i = 0; i < count; i++)
	{
		total += score[i];
	}
	avg = total / (double)count;

	for (i = 0; i < count; i++)
	{
		printf("%5d", score[i]);
	}
	printf("\n");

	printf("평균 : %.1lf\n", avg);

	return 0;
}