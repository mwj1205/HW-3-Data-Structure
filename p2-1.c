#include <stdio.h>

#define MAX_SIZE 100

float sum(float list[], int);
float input[MAX_SIZE], answer;
int i;

void main(void){
    for(i=0; i < MAX_SIZE; i++) // 배열에 0~99 입력
        input[i] = i;

    printf("address of input = %p\n", input);

    answer = sum(input, MAX_SIZE); // input 배열의 주소값을 넘겨준다
    printf("The sum is: %f\n", answer);
}

float sum(float list[], int n){ // Call by reference. 배열의 주소를 받음
    int i;
    float tempsum = 0;

    printf("value of list = %p\n", list); // list는 input의 주소를 넘겨받는다.
    printf("address of list= %p\n",&list); // list의 주소값이 출력된다. 

    for(i = 0; i < n; i++)    // 함수에 모든 원소 더하기
        tempsum += list[i];
    return tempsum; // 더한 값 리턴
}
