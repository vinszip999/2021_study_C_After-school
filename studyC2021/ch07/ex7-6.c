#include <stdio.h>
// 2021�� 4�� 1�� ����� 
// �ۼ��� : ������
// 199p 3�� ����Ǵ� ���ȣ�� �Լ�
void fruit(int count);

int main(void)
{
	fruit(1);

	return 0;
}

void fruit(int count)
{
	printf("apple\n");
	if (count == 3) return;
	fruit(count + 1);
}