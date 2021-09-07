#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdio.h>
// 2021년 4월 15일 목요일
// 작성자 : 이유빈
// 292p 도전 실전 예제 lotto 로또 번호 생성 프로그램

void  input_nums(int* lotto_nums);
void  print_nums(int* lotto_nums);

int main(void)
{
	int lotto_nums[6] = { 0 };
	input_nums(lotto_nums);
	print_nums(lotto_nums);
	return 0;
}

void   input_nums(int* lotto_nums)
{
	int i, n = 0, in;
	while (1) {
		printf("번호 입력 : ");
		scanf("%d", &in);
		for (i = 0; i < n; i++)
		{
			if (lotto_nums[i] == in)
			{
				printf("같은 값이 존재합니다. ");
				break;
			}
		}
		if (n == i) {
			lotto_nums[n] = in;
			n++;
		}
		if (n >= 6) break;
	}
}



void print_nums(int* plotto_nums)
{
	int i;
	printf("로또 번호 : ");
	for (i = 0; i < 6; i++)
	{
		printf("%5d", plotto_nums[i]);
	}
}
