//c언어로 거스름돈 계산하는 프로그램 작성하기
#include <stdio.h>

int main(void)
{

	int coin[4] = { 500,100,50,10 }, change;

	printf("거스름 돈을 입력하세요 : ");
	scanf_s("%d", &change);

	int sum = 0;
	for (int i = 0; i < 4; i++) {

		int count = 0;
		while (change / coin[i] > 0) {
			count++;
			change -= coin[i];
		}
		sum += count;
		printf("%d원 동전 = %d개\n", coin[i], count);
	}
	printf("--------------------\n");
	printf("총 잔돈의 개수는 : %d\n", sum);


	return 0;
}