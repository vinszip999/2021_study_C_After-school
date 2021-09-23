#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
// 2021년 9월 23일 목요일
// 작성자 : 이유빈
// 397p 2개 반 3명 학생의 4과목 점수를 저장하는 3차원 배열

int main(void)
{
	int score[2][3][4] = {
		{ {72, 80, 95, 60}, {68, 98, 83, 90}, {75, 72, 84, 90} },
		{ {66, 85, 90, 88}, {95, 92, 88, 95}, {43, 72, 56, 75} }
	};

	int i, j, k;

	for (i = 0; i < 2; i++)
	{
		printf("%d반 점수...\n", i + 1);
		for (j = 0; j < 3; j++)
		{
			for (k = 0; k < 4; k++)
			{
				printf("%5d", score[i][j][k]);
			}
			printf("\n"); // 한 학생의 점수를 출력하고 줄 바꿈
		}
		printf("\n"); // 한 반의 점수를 출력하고 줄 바꿈
	}

	return 0;

}