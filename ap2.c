#include <stdio.h>
#include <stdlib.h>

int main(){
    int list[5];
    int *plist[5];

    list[0] = 10;
    list[1] = 11;

    plist[0] = (int *)malloc(sizeof(int));      // 동적 할당

    printf("[----- [한민우] [2018038047] -----]\n");

    printf("list[0]          \t= %d\n", list[0]);             // list[0]에 들어있는 값 10
    printf("address of list \t= %p\n",list);                  // 배열의 이름은 배열의 맨 앞 주소값을 가진 포인터이다
    printf("address of list[0] \t= %p\n",&list[0]);           // list[0]의 주소값
    printf("address of list + 0 \t= %p\n", list+0);           // list[0]을 가리키는 포인터 list [0]의 주소
    printf("address of list + 1 \t= %p\n", list+1);           // list[1]을 가리키는 포인터 list [1]의 주소
    printf("address of list + 2 \t= %p\n", list+2);           // list[2]을 가리키는 포인터 list [2]의 주소
    printf("address of list + 3 \t= %p\n", list+3);           // list[3]을 가리키는 포인터 list [3]의 주소
    printf("address of list + 4 \t= %p\n", list+4);           // list[4]을 가리키는 포인터 list [4]의 주소
    printf("address of list[4] \t= %p\n",&list[4]);           // list [4]의 주소 값
    /* 배열 자료형이 int이기 때문에 주소값이 4씩 차이난다 */

    free(plist[0]);                         // 할당 해제    
}