#include <stdio.h>
#include <stdlib.h>

int main(){
    int **x;

    printf("[----- [한민우] [2018038047] -----]\n");

    printf("sizeof(x) = %lu\n", sizeof(x));          
    // 주소를 저장함 (주소 크기)
    printf("sizeof(*x) = %lu\n", sizeof(*x));        
    // 주소를 저장함 (주소 크기)
    printf("sizeof(**x) = %lu\n", sizeof(**x));      
    // int형 데이터를 저장함 (int형 변수의 크기)
}
