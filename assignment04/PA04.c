/*
 * ���ϸ�: PA04.c

 * ����: ������ �Է¹޾� �������� �˻��ϴ� ���α׷��� �ۼ��Ͻÿ�.
		 ������ �Ǵ� ������ ������ ����.
		 - 4�� ������ �������� �ش� �����̴�.
		 - 4�� ������ �������� �� �߿��� 100���� ������ �������� �ش� ������ �ƴϴ�.
		 - 100���� ������ �������� �� �߿��� 400���� ������ �������� �ش� �����̴�.

 * �ۼ���: ������

 * ��¥: 2025.04.24.

 * ����: v1.0

 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int assign_04(void);
int Year();

int main() {
	int Y = assign_04();

	return Y;
}

int assign_04(void)
{
	int year;
	printf("����? ");
	scanf("%d", &year);
	
	Year(year);
}

int Year(int y)
{
	if (y % 4 == 0) {
		if (y % 100 == 0) {
			if (y % 400 == 0) {
				printf("%d���� �����Դϴ�.\n", y);
			}
			else {
				printf("%d���� ������ �ƴմϴ�.\n", y);
			}
		}
		else {
			printf("%d���� �����Դϴ�.\n", y);
		}
	}
	else {
		printf("%d���� ������ �ƴմϴ�.\n", y);
	}
	return 0;
}
