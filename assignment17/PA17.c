/*
 * ���ϸ�: PA17.c

 * ����: ���� �ð��� ������ �Է¹޾Ƽ� ���� ����� ����ؼ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
		 ���� ����� ���� 30���� 2000��, �� ���Ĵ� 10�д� 1000�������� ����ϸ�, �Ϸ� �ִ� 25000����
		 ���� �� ����. ���� �ð��� 24�ð��� ���� �� ���ٰ� �����Ѵ�.
 
 * �ۼ���: ������

 * ��¥: 2025.04.24.

 * ����: v1.0

 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int assign_17(void);
int Parking();

int main() {
	int P = assign_17();

	return P;
}

int assign_17(void)
{
	int time;
	printf("���� �ð�(��)? ");
	scanf("%d", &time);

	if (time > 1440) {
		printf("���� �ð��� 24�ð��� �ʰ��� �� �����ϴ�.\n");
		return -1;  // ������ ����
	}
	// ���� ��� ��� �Լ� ȣ��
	Parking(time);
}

int Parking(int t)
{
	int fee = 0;
	int day = 0;
	// ���� ��� ���
	if (t <= 30) {
		fee = 2000;
	}
	else {
		t -= 30;
		fee = 2000 + (t / 10) * 1000;
	}
	if (fee > 25000) {
		fee = 25000;
	}
	printf("���� ���: %d��\n", fee);

	return 0;
}