#include <stdio.h>
#include <stdlib.h>

int main(){
    int list[5];
    int *plist[5];

    list[0] = 10;
    list[1] = 11;

    plist[0] = (int *)malloc(sizeof(int));      // ���� �Ҵ�

    printf("[----- [�ѹο�] [2018038047] -----]\n");

    printf("list[0]          \t= %d\n", list[0]);             // list[0]�� ����ִ� �� 10
    printf("address of list \t= %p\n",list);                  // �迭�� �̸��� �迭�� �� �� �ּҰ��� ���� �������̴�
    printf("address of list[0] \t= %p\n",&list[0]);           // list[0]�� �ּҰ�
    printf("address of list + 0 \t= %p\n", list+0);           // list[0]�� ����Ű�� ������ list [0]�� �ּ�
    printf("address of list + 1 \t= %p\n", list+1);           // list[1]�� ����Ű�� ������ list [1]�� �ּ�
    printf("address of list + 2 \t= %p\n", list+2);           // list[2]�� ����Ű�� ������ list [2]�� �ּ�
    printf("address of list + 3 \t= %p\n", list+3);           // list[3]�� ����Ű�� ������ list [3]�� �ּ�
    printf("address of list + 4 \t= %p\n", list+4);           // list[4]�� ����Ű�� ������ list [4]�� �ּ�
    printf("address of list[4] \t= %p\n",&list[4]);           // list [4]�� �ּ� ��
    /* �迭 �ڷ����� int�̱� ������ �ּҰ��� 4�� ���̳��� */

    free(plist[0]);                         // �Ҵ� ����    
}