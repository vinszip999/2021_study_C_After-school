#include <stdio.h>
// 2021�� 4�� 1�� ����� 
// �ۼ��� : ������
// 204p Ȯ�ι��� 2��
void sum(int n);
int main(void)
{
	sum(10);
	sum(100);

	return 0;
}
void sum(int n)
{
	int hap = 0;

	for (int i = 1; i <= n; i++)
	{
		hap += i;
	}
	printf("1���� %d������ ���� %d�Դϴ�.\n", n, hap);
}