#include <stdio.h>
//�л����� ������ 4.3�� �����̴�.
//�迭 grades[]�� �л� 10���� ������ �Է¹޴´�.
//�̰��� 100�� �������� ��ȯ�Ͽ� �迭 scores[]�� 
//�����ϴ� �Լ��� �ۼ��ϰ� �׽�Ʈ�Ͻÿ�.
int main(void)
{
	double ary[5];
	double max;
	int size = sizeof(ary) / sizeof(ary[0]);
	input_ary(ary, size);
	max = find_max(ary, size);
	printf("�迭�� �ִ� : %.1lf\n", max);

	return 0;
}
void input_ary(double* pa, int size) {
	int i;
	printf("%d���� �Ǽ��� �Է� : \n", size);
	for (i = 0; i < size; i++) {
		scanf("%lf", pa + i);
	}
}

double find_max(double* pa, int size) {
	double max;
	int i;
	for (i = 0; i < size; i++) {
		printf("ary[%d], %1lf \n", i, pa[i]);
		if (pa[i] > max) max = pa[i];
	}

	return max;
}