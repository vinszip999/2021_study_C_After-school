#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
// 2021�� 5�� 25�� ȭ����
// �ۼ��� : ������
// 374p ���� 13-7 �����͸� �Ἥ ������ ���� 10�� ���ϴ� ���
void add_ten(int* pa);

int main(void)
{
	int a = 10;

	add_ten(&a);
	print("a : %d\n", a);

	return 0;
}

void add_ten(int* pa)
{
	*pa = *pa + 10;
}