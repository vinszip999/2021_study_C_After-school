//c���� �Ž����� ����ϴ� ���α׷� �ۼ��ϱ�
#include <stdio.h>

int main(void)
{

	int coin[4] = { 500,100,50,10 }, change;

	printf("�Ž��� ���� �Է��ϼ��� : ");
	scanf_s("%d", &change);

	int sum = 0;
	for (int i = 0; i < 4; i++) {

		int count = 0;
		while (change / coin[i] > 0) {
			count++;
			change -= coin[i];
		}
		sum += count;
		printf("%d�� ���� = %d��\n", coin[i], count);
	}
	printf("--------------------\n");
	printf("�� �ܵ��� ������ : %d\n", sum);


	return 0;
}