#include <stdio.h>
// 2021�� 4�� 13�� ȭ����
// �ۼ��� : ������
// 284p ���� 10-6 ũ�Ⱑ �ٸ� �迭�� ����ϴ� �Լ�
void print_ary(int* pa, int size);

int main(void)
{
	int ary1[5] = { 10,20,30,40,50 };
	int ary2[7] = { 10,20,30,40,50,60,70 };

	print_ary(ary1, 5);
	printf("\n");
	print_ary(ary2, 7);

	return 0;

}

void print_ary(int* pa, int size)
{
	int i;
	
	for (i = 0; i < size; i++)
	{
		printf("%d ", pa[i]); // *(pa+i)
	}
}