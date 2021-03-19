#include <stdio.h>

struct student {
    char lastName[13];    /* 13 bytes */
    int studentId;        /* 4 bytes */
    short grade;          /* 2 bytes */
};

int main(){
    
    struct student pst;

    printf("[----- [한민우] [2018038047] -----]\n");
    
    /* lastName 문자열에서 padding으로 13 byte + 3 byte(padding)
       short 자료형에서 padding으로 2 byte + 2 byte(padding)
       int형 4 byte로 총 24 byte */
    printf("size of student = %ld\n",sizeof(struct student)); 
    printf("size of int = %ld\n",sizeof(int));
    printf("size of short = %ld\n", sizeof(short));

    return 0;
}
