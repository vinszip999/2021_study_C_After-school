// 2���� ������ ��, ��, ��, �����⸦ 
// ���ÿ� ��ȯ�ϴ� �Լ��� �ۼ��ϰ� �׽�Ʈ �Ͻÿ�.
// ������ �Ű����� �����.
void get_suhak(int x, int y, int* p_sum, int* p_cha, int* p_mul, double* p_div);

int main(void)
{
	int sum, cha, mul = 0;
	double div = 0;

	get_suhak(8, 2, &sum, &cha, &mul, &div);

	printf("���� :  %d\n, ���� : %d\n, ���� : %d\n, ������ ���� : %lf\n",
		sum, cha, mul, div);

	return 0;
}


void get_suhak(int x, int y, int* p_sum, int* p_cha, int* p_mul, double* p_div) {
	*p_sum = x + y;
	*p_cha = x - y;
	*p_mul = x * y;
	*p_div = x / y;
}