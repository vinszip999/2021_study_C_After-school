#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// 2021�� 5�� 6�� �����
// �ۼ��� : ������
// 315p ���� ���� ����

int main(void)
{
	char ch, chtest;
	int cnt = 0;
	int long_cnt = 0;
	int res = 0;
	while ((res = scanf("%c", &ch)) != -1) {
		if (ch != '\n')
		{
			cnt++;
		}
		else {
			if (cnt > long_cnt)
			{
				long_cnt = cnt;
				cnt = 0;
			}
			else {
				cnt = 0;
			}
		}
	}
	printf("���ڿ� �Է� : %d", long_cnt);

	return 0;
}