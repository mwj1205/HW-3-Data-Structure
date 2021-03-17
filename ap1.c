#include <stdio.h>
#include <stdlib.h>

int main(){
    int list[5];
    int *plist[5] = {NULL,};
    
    plist[0] = (int *)malloc(sizeof(int));              // plist[0]�� ���Ͽ� ���� �Ҵ�

    list[0] = 1;
    list[1] = 100;

    *plist[0] = 200;

    printf("[----- [�ѹο�] [2018038047] -----]\n");

    // �迭�� �̸��� �迭�� ù �ּҰ�(�� �� ������ �ּ�)�� �ǹ��Ѵ�
    printf("value of list[0]        = %d\n", list[0]);         // list[0]�� ����ִ� ������ ��
    printf("address of list[0]       = %p\n", &list[0]); // list[0]�� �ּ�
    printf("value of list           = %p\n", list);     // �迭 list�� �ּ�
    printf("address of list (&list)  = %p\n", &list);    // �迭 list�� �ּ�


    printf("-------------------------------------\n\n");
    /* �迭 �ּҿ����� + ������ ���� ������ �ּҷ� �Ѿ�� ����
    ������ ���� �迭�� �ڷ����� int�̹Ƿ� �ڷ��� ũ�Ⱑ 4�̱� ������
    list�� list +1 �� �ּ� ���� 4��ŭ ���̳��� */
    printf("value of list[1]   = %d\n", list[1]);       // list[1]�� ����ִ� ������ ��
    printf("address of list[1]  = %p\n", &list[1]);      // list[1]�� �ּ�
    printf("value of *(list+1) = %d\n", *(list + 1));   // list + 1�� �ּҸ� ������ ��
    printf("address of list+1  = %p\n", list+1);        // list + 1�� �ּ�

    printf("-------------------------------------\n\n");
    // ������ �迭�� �̸��� �迭�� ù �ּҰ��̴�
    printf("value of *plist[0] = %d\n", *plist[0]);     // *plist[0]�� �Ҵ��� �� 200
    printf("&plist[0]          = %p\n", &plist[0]);     // plist[0]�� �ּ�
    printf("&plist             = %p\n", &plist);        // plist�� �ּ�
    printf("plist              = %p\n", plist);         // plist�� �ּ�
    printf("plist[0]           = %p\n", plist[0]);      // plist�� �Ҵ���� ���� �޸� ������ �ּ�
    printf("plist[1]           = %p\n", plist[1]);      // NULL�� �ʱ�ȭ �� �� ������ �Է��� ����
    printf("plist[2]           = %p\n", plist[2]);      // NULL�� �ʱ�ȭ �� �� ������ �Է��� ����
    printf("plist[3]           = %p\n", plist[3]);      // NULL�� �ʱ�ȭ �� �� ������ �Է��� ����
    printf("plist[4]           = %p\n", plist[4]);      // NULL�� �ʱ�ȭ �� �� ������ �Է��� ����

    free(plist[0]); // �Ҵ�� �޸� ����
}