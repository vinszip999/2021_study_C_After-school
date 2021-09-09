// 2개의 정수의 합, 차, 곱, 나누기를 
// 동시에 반환하는 함수를 작성하고 테스트 하시오.
// 포인터 매개변수 사용함.
void get_suhak(int x, int y, int* p_sum, int* p_cha, int* p_mul, double* p_div);

int main(void)
{
	int sum, cha, mul = 0;
	double div = 0;

	get_suhak(8, 2, &sum, &cha, &mul, &div);

	printf("합은 :  %d\n, 차는 : %d\n, 곱은 : %d\n, 나누기 값은 : %lf\n",
		sum, cha, mul, div);

	return 0;
}


void get_suhak(int x, int y, int* p_sum, int* p_cha, int* p_mul, double* p_div) {
	*p_sum = x + y;
	*p_cha = x - y;
	*p_mul = x * y;
	*p_div = x / y;
}