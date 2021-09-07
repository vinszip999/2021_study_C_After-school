#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// 2021년 5월 6일 목요일
// 작성자 : 이유빈
// 315p 도전 실전 예제

int main(void)
{
	char ch, chtest;
	int cnt = 0;
	int long_cnt = 0;
	int res = 0;
	while ((res = scanf("%c", &ch)) != -1) {
		if (ch != '\n')
		{
			cnt++;
		}
		else {
			if (cnt > long_cnt)
			{
				long_cnt = cnt;
				cnt = 0;
			}
			else {
				cnt = 0;
			}
		}
	}
	printf("문자열 입력 : %d", long_cnt);

	return 0;
}