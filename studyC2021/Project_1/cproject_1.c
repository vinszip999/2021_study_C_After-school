#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <conio.h>
#define MAX_NUMBER 5

void intro_game() {

	printf("정방행렬에 나타난 숫자 중에서\n");
	printf("가장 적게 나타난 숫자를 찾아라.\n");
	printf("제한 시간은 5초입니다.\n");
	printf("아무 키나 누르면 시작합니다.\n");


}

void print_number(int n, int cnt[]) {
	int i, j, r_num;
	for (i = 0; i < MAX_NUMBER; i++)
	{
		cnt[i] = 0;
	}
	for (i = 1; i < n; i++)
	{
		for (j = 1; j <= n; j++)
		{
			r_num = rand() % MAX_NUMBER;
			cnt[r_num] += 1;
			printf("%d", r_num);
		}
		printf("\n");
	}
}

int find_num(int cnt[]) { // 빈도수가 가장 많은 숫자 계산
	int i, check, max_num = 0;
	for (i = 0; i < MAX_NUMBER; i++)
	{
		if (max_num <= cnt[i])
		{
			max_num = cnt[i];
			check = i;

		}
	}
	return check;
}

void check_result(int user, int answer, int cnt[])
{
	// 맞았다, 틀렸다 출력
	if (user == answer)
		printf("\n 맞았습니다.\n");
	else
		printf("\n 틀렸습니다.\n");
	// 정답 출력
	printf("번호 : %d, 횟수 : %d\n", answer, cnt[answer]);
}

void game_control() {
	int cnt[MAX_NUMBER];
	clock_t start, end;
	double pst;
	int user, answer;
	// 정방행렬 모양으로 난수를 출력
	print_number(MAX_NUMBER, cnt);
	printf("출현횟수가 가장 적은 숫자 입력 : ");
	start = clock();
	while (!_kbhit())
	{
		end = clock();
		pst = (double)(end - start) / CLK_TCK;
		if (pst > 5)
		{
			printf("\n 시간 제한 5초가 넘었습니다. \n");
			exit(0);
		}
	}
	user = _getch() - '0';
	printf("%d", user);
	answer = find_num(cnt); // 빈도수가 가장 많은 숫자 찾기
	// 사용자가 입력한 값과 정답을 비교하여 결과물 출력
	check_result(user, answer, cnt);
}

int main(void)
{
	srand(time(NULL));
	intro_game(); // 게임 규칙 or 진행에 대한 설명 출력 함수
	//print_number(MAX_NUMBER, cnt);
	game_control(); // 게임에 대한 전반적인 제어 함수
	return 0;
}

// 빈도수가 가장 많은 숫자 찾았다 -> 빈도수가 가장 적은 숫자를 찾으세요.