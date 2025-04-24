/*
 * ���ϸ�: PA08.c

 * ����: ��Ʈ ������ �����ϴ� ���⸦ ���α׷��Ͻÿ�. &�� ��Ʈ AND, |�� ��Ʈ OR, ^�� ��Ʈ XOR ������ ó���Ѵ�.
		 "0xAB & 0xCC"ó�� ������� �Է��ؼ� ���� ����� ���Ѵ�. ��Ʈ �����̹Ƿ� ������� �Է¹��� ��
		 10����, 8����, 16������ ����� �� �ְ� �ϰ�, ������ ����� 16������ ����Ѵ�.

 * �ۼ���: ������

 * ��¥: 2025.04.24.

 * ����: v1.0

 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int assign_08(void);
int Bit();

int main() {
	int B = assign_08();

	return B;
}

int assign_08(void)
{
	int A, B;
	char OP;
	printf("��Ʈ �����? ");
	scanf("%i %c %i", &A, &OP, &B);
	Bit(A, B, OP);
	return 0;
}

int Bit(int a, int b, char op )
{
	int result = 0;

	// ��Ʈ ���� ����
	switch (op) {
	case '&':
		result = a & b;
		break;
	case '|':
		result = a | b;
		break;
	case '^':
		result = a ^ b;
		break;
	default:
		printf("�߸��� �������Դϴ�.\n");
		return -1;
	}
	// ����� 16������ ���
	printf("%X %c %X: %x\n", a, op, b, result);

	return 0;
}