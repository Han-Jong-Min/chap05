/*
 * ���ϸ�: PA05.c

 * ����: �µ��� �Է¹޾� �����µ��� ȭ���µ���, ȭ���µ��� �����µ��� ��ȯ�ϴ� ���α׷��� �ۼ��Ͻÿ�.

         1) "27 C" �Ǵ� "27 F"ó�� �µ��� �Է¹��� �� �������� ȭ������ ������ �� �ִ� ���ڸ� �Բ� �Է¹޴´�
         2) �Բ� �Էµ� ���ڰ� 'C'�� ���� �µ��̹Ƿ� ȭ�� �µ��� ���ؼ� ����ϰ�,
         �Էµ� ���ڰ� 'F'�� ȭ�� �µ��̹Ƿ� �����µ��� ���ؼ� ����Ѵ�.

 * �ۼ���: ������

 * ��¥: 2025.04.24.

 * ����: v1.0

 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int assign_05(void);
float tempChange();

//assign_05�Լ� ȣ��
int main()
{
    int T = assign_05();

    return T;
}


int assign_05(void)
{
    char x; // �Է¹��� ����

    float tempin = 0.0; //�Է¹��� �µ�(����)
    float tempout = 0.0; //����� �µ�(����)

    printf("�µ�?(C �Ǵ� F�� �ٿ��ּ���) ");
    scanf("%f %c", &tempin, &x);

    tempout = tempChange(x, tempin);

    if (x == 'C')
    {
        tempout = (tempin * 9.0 / 5.0) + 32.0;
        printf("%.2f C ==> %.2f F", tempin, tempout);
    }

    if (x == 'F')
    {
        tempout = (tempin - 32.0) * 5.0 / 9.0;
        printf("%.2f F ==> %.2f C", tempin, tempout);
    }
    return 0;
}


// �µ��� ������ �°� ��ȯ���ִ� �Լ�
float tempChange(char x, float tempin)
{
    float tempout;

    if (x == 'C')
    {
        tempout = (tempin * 5 / 9) + 32;
    }

    if (x == 'F')
    {
        tempout = (tempin - 32) * 5 / 9;
    }
    return tempout;
}

