#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdio.h>
// 2021�� 4�� 15�� �����
// �ۼ��� : ������
// 292p ���� ���� ���� lotto �ζ� ��ȣ ���� ���α׷�

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
		printf("��ȣ �Է� : ");
		scanf("%d", &in);
		for (i = 0; i < n; i++)
		{
			if (lotto_nums[i] == in)
			{
				printf("���� ���� �����մϴ�. ");
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
	printf("�ζ� ��ȣ : ");
	for (i = 0; i < 6; i++)
	{
		printf("%5d", plotto_nums[i]);
	}
}
