#include <stdio.h>
// 2021�� 8�� 31�� ȭ����
// �ۼ��� : ������
// 275p ���� 10-4 �������� ������ ���� ����
int main(void)
{
	int ary[5] = { 10,20,30, 40, 50 };
	int* pa = ary;
	int* pb = pa + 3;

	printf("pa : %u/n", pa);
	printf("pb : %u/n", pb);
	pa++;
	printf("pb - pa : %u\n", pb - pa);

	printf("�տ� �ִ� �迭 ����� �� ��� : ");
	if (pa < pb) printf("%d\n", *pa);
	else printf("%d\n", *pb);

	return 0;

}