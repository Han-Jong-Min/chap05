/*
 * ���ϸ�: PA09.c

 * ����: �ܹ��� ������ ��꼭 ���α׷��� �ۼ��Ͻÿ�. �ܹ��Ŵ� 4000��, �ݶ�� 1500��, ����Ƣ���� 2000���̰�,
		 �� ������ ��Ʈ�� �ֹ��ϸ� 6500���̶�� ����. �ܹ���, �ݶ�, ����Ƣ���� ������ �Է¹޾Ƽ�
		 �ִ��� ��Ʈ�� �����ϰ� �������� ��ǰ���� ����ϵ��� �Ѵ�. ���� ��� �ܹ��� 2, �ݶ� 1, ����Ƣ�� 3��
		 �ֹ��ϸ� ����� ��Ʈ 1, �ܹ��� 1, ����Ƣ�� 2�� �ؾ� �Ѵ�.

 * �ۼ���: ������

 * ��¥: 2025.04.24.

 * ����: v1.0

 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int assign_09(void);
int Set();

//assign_09�Լ� ȣ��
int main()

{
    int S = assign_09();

    return S;
}


int assign_09(void)
{
    printf("[�ܹ��� 4000��, ����Ƣ�� 2000��, �ݶ� 1500��, ��Ʈ 6500��]\n");

    int ham = 0; //�ܹ��� ����
    int fry = 0; //����Ƣ�� ����
    int cok = 0; //�ݶ� ����
    int set = 0; //��Ʈ ����

    printf("�ܹ��� ����? ");
    scanf("%d", &ham);
    printf("����Ƣ�� ����? ");
    scanf("%d", &fry);
    printf("�ݶ� ����? ");
    scanf("%d", &cok);

    set = Set(ham, fry, cok);

    ham -= set;
    fry -= set;
    cok -= set;

    // ��� ���
    printf("\n��ǰ��        �ܰ�     ����     �ݾ�\n");
    if (set > 0)
        printf("��Ʈ          6500     %d        %d\n", set, 6500 * set);
    if (ham > 0)
        printf("�ܹ���        4000     %d        %d\n", ham, 4000 * ham);
    if (fry > 0)
        printf("����Ƣ��      2000     %d        %d\n", fry, 2000 * fry);
    if (cok > 0)
        printf("�ݶ�          1500     %d        %d\n", cok, 1500 * cok);

    printf("-----------------------------------\n");
    printf("�հ�                           %d", 6500 * set + 4000 * ham + 2000 * fry + 1500 * cok);

    return 0;
}


// ��Ʈ�� �ִ������� �������ִ� �Լ�
int Set(int ham, int pot, int cok)
{
    int set = 0;

    while (ham != 0 && pot != 0 && cok != 0)
    {
        ham--;
        pot--;
        cok--;
        set++;
    }
    return set;
}
