#include <stdio.h>
//학생들의 평점은 4.3이 만점이다.
//배열 grades[]에 학생 10명의 학점을 입력받는다.
//이것을 100점 만점으로 변환하여 배열 scores[]에 
//저장하는 함수를 작성하고 테스트하시오.
int main(void)
{
	double ary[5];
	double max;
	int size = sizeof(ary) / sizeof(ary[0]);
	input_ary(ary, size);
	max = find_max(ary, size);
	printf("배열의 최댓값 : %.1lf\n", max);

	return 0;
}
void input_ary(double* pa, int size) {
	int i;
	printf("%d개의 실수값 입력 : \n", size);
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