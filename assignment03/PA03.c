/*
 * ���ϸ�: PA03.c

 * ����: �Ž������� �Է¹޾� 50000��, 10000��, 5000��, 1000��, 100��, 10��¥����
         ���� �� �� �ʿ����� ���ؼ� ����Ͻÿ�. �ʿ� �̸� ������ �����Ѵ�.

 * �ۼ���: ������

 * ��¥: 2025.04.23.

 * ����: v1.0

 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int assign_03(void);
int MoneyChange();

int main() {
    int M = assign_03();

    return M;
}

int assign_03(void)
{
    int money;
    int count;
    printf("�Ž������� �Է��ϼ���: ");
    scanf("%d", &money);

    MoneyChange(money);
}

int MoneyChange(int don)
{
    int chan = 0;
    int count;
    chan = don - (don % 10);
    printf("�Ž����� (10���̸� ����): %d\n", chan);

    if (don >= 50000) {
        count = don / 50000;
        printf("50000��: %d��\n", count);
        don %= 50000;
    }

    if (don >= 10000) {
        count = don / 10000;
        printf("10000��: %d��\n", count);
        don %= 10000;
    }

    if (don >= 5000) {
        count = don / 5000;
        printf("5000��: %d��\n", count);
        don %= 5000;
    }

    if (don >= 1000) {
        count = don / 1000;
        printf("1000��: %d��\n", count);
        don %= 1000;
    }

    if (don >= 100) {
        count = don / 100;
        printf("100��: %d��\n", count);
        don %= 100;
    }

    if (don >= 10) {
        count = don / 10;
        printf("10��: %d��\n", count);
        don %= 10;
    }

    return 0;
}