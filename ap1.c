#include <stdio.h>
#include <stdlib.h>

int main(){
    int list[5];
    int *plist[5] = {NULL,};
    
    plist[0] = (int *)malloc(sizeof(int));              // plist[0]에 대하여 동적 할당

    list[0] = 1;
    list[1] = 100;

    *plist[0] = 200;

    printf("[----- [한민우] [2018038047] -----]\n");

    // 배열의 이름은 배열의 첫 주소값(맨 앞 원소의 주소)을 의미한다
    printf("value of list[0]        = %d\n", list[0]);         // list[0]에 들어있는 데이터 값
    printf("address of list[0]       = %p\n", &list[0]); // list[0]의 주소
    printf("value of list           = %p\n", list);     // 배열 list의 주소
    printf("address of list (&list)  = %p\n", &list);    // 배열 list의 주소


    printf("-------------------------------------\n\n");
    /* 배열 주소에서의 + 연산은 다음 원소의 주소로 넘어가는 연산
    지금의 경우는 배열의 자료형이 int이므로 자료형 크기가 4이기 때문에
    list와 list +1 한 주소 값이 4만큼 차이난다 */
    printf("value of list[1]   = %d\n", list[1]);       // list[1]에 들어있는 데이터 값
    printf("address of list[1]  = %p\n", &list[1]);      // list[1]의 주소
    printf("value of *(list+1) = %d\n", *(list + 1));   // list + 1의 주소를 참조한 값
    printf("address of list+1  = %p\n", list+1);        // list + 1의 주소

    printf("-------------------------------------\n\n");
    // 포인터 배열도 이름이 배열의 첫 주소값이다
    printf("value of *plist[0] = %d\n", *plist[0]);     // *plist[0]에 할당한 값 200
    printf("&plist[0]          = %p\n", &plist[0]);     // plist[0]의 주소
    printf("&plist             = %p\n", &plist);        // plist의 주소
    printf("plist              = %p\n", plist);         // plist의 주소
    printf("plist[0]           = %p\n", plist[0]);      // plist가 할당받은 동적 메모리 공간의 주소
    printf("plist[1]           = %p\n", plist[1]);      // NULL로 초기화 한 후 데이터 입력이 없다
    printf("plist[2]           = %p\n", plist[2]);      // NULL로 초기화 한 후 데이터 입력이 없다
    printf("plist[3]           = %p\n", plist[3]);      // NULL로 초기화 한 후 데이터 입력이 없다
    printf("plist[4]           = %p\n", plist[4]);      // NULL로 초기화 한 후 데이터 입력이 없다

    free(plist[0]); // 할당된 메모리 해제
}