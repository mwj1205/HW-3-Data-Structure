#include <stdio.h>

void print1 (int *ptr, int rows);

int main(){
    int one[] = {0,1,2,3,4};

    printf("[----- [한민우] [2018038047] -----]\n");

    /* 배열의 이름은 배열의 첫번째 원소의 주소값을 가리키는 포인터이다. */
    printf("one     = %p\n", one);
    printf("&one    = %p\n", &one);
    printf("&one[0] = %p\n", &one[0]);
    printf("\n");

    print1(&one[0],5); // 배열의 첫 번째 원소의 주소값을 넘겨준다.

    return 0;
}

void print1 (int *ptr, int rows) // 주소값과 원소 수를 넘겨받음
{/* print out a one-dimensional array using a pointer */
    int i;

    printf ("Address Contents\n");

    for (i = 0; i < rows; i++)  
        printf("%8u%5d\n", ptr + i, *(ptr + i));
         // int형의 배열이기 때문에 int형의 사이즈 만큼 주소값이 차이난다
    printf("\n");
}
