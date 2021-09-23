#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
// 2021년 9월 23일 목요일
// 작성자 : 이유빈
// 384p 학생 3명의 네 과목 총점과 평균을 구하는 프로그램

int main(void)
{
	int score[3][4];
	int total;
	double avg;
	int i, j;

	for (i = 0; i < 3; i++)
	{
		printf("4과목의 점수 입력 : ");
		for (j = 0; j < 4; j++)
		{
			scanf_s("%d", &score[i][j]);
		}
	}

	for (i = 0; i < 3; i++)
	{
		total = 0;
		for (j = 0; j < 4; j++)
		{
			total += score[i][j];
		}
		avg = total / 4.0;
		printf("총점 : %d, 평균 : %.2lf\n", total, avg);
	}

	return 0;

}