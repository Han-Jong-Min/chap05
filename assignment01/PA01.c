/*
 * ���ϸ�: PA01.c

 * ����: ���� ��ǥ (x, y)�� �Է¹޾� ��ũ�� ���� ���� ���� ���� ������ �˻��ϴ� ���α׷��� �ۼ��Ͻÿ�.
         ��ũ�� ���� ���� ������ ���簢�� ����� �������� ���簢���� �»������ ���ϴ����� ���ؼ� �����ȴ�.

 * �ۼ���: ������

 * ��¥: 2025.04.24.

 * ����: v1.0

 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int assign_01(void);
int Coordinate(int l, int t, int r, int b);

int main() {
    int xy = assign_01();

    return xy;
}

int assign_01(void)
{
    int left;
    int top;
    int right;
	int bottom;
    printf("���� ������ �»���� (left, top)? ");
    scanf("%d %d", &left, &top);
	printf("���� ������ ���ϴ��� (right, bottom)? ");
	scanf("%d %d", &right, &bottom);
	
	

    Coordinate(left, top, right, bottom);
}

int Coordinate(int l, int t, int r, int b)
{
	int x;
	int y;
	printf("���� ��ǥ (x, y)? ");
	scanf("%d %d", &x, &y);

	if (x >= l && x <= r && y >= t && y <= b) {
		printf("���簢�� ����� ���� ���� ���� ���Դϴ�.\n");
	}
	else {
		printf("���� ���� ���� ���Դϴ�.\n");
	}
	return 0;
}