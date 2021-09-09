#include <stdio.h>

int main() {
	// code
	printf("배열과 포인터 테스트 확인문제 279쪽 ");
	double ary[5] = { 1.2, 3.5, 7.4, 0.5, 10.0 };
	double* pa = ary;
	double* pb = ary + 4;
	// ary 배열명 주소
	int i;
	for (i = 0; i < 3; i++) {
		printf("%1lf ", *(pa+i));
	}
	printf("\n");
	for (i = 0; i < 3; i++) {
		printf("%1lf ", *(pb+i));
	}
	return 0;
}