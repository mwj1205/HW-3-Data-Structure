#include <stdio.h>

struct student1{
    char lastName;
    int studentID;
    char grade;
};

typedef struct {
    char lastName;
    int studentID;
    char grade;
}student2;

int main(){

    printf("[----- [한민우] [2018038047] -----]\n");

    /* 구조 선언 시 typedef 사용하지 않았으면
    변수 선언시 앞에 struct(키워드)를 붙여야 함 */
    struct student1 st1 = {'A',100,'A'}; 
    
    printf("st1.lastName = %c\n", st1.lastName);
    printf("st1.studentID = %d\n", st1.studentID);
    printf("st1.grade = %c\n", st1.grade);

    /* typedef을 이용해 구조체를 정의했기 때문에
    struct를 앞에 쓰지 않아도 된다. */
    student2 st2 = {'B',200,'B'};

    printf("\nst2.lastName = %c\n",st2.lastName);
    printf("st2.studentID = %d\n",st2.studentID);
    printf("st2.grade = %c\n", st2.grade);

    student2 st3;
    st3 = st2;                  // 구조 치환이 가능하다
    
    //st2의 값들이 그대로 st3으로 대입 된 것을 확인할 수 있다.
    printf("\nst3.lastName = %c\n",st3.lastName);
    printf("st3.studentID = %d\n", st3.studentID);
    printf("st3.grade = %c\n",st3.grade);

    /* equality test */
    
    /* if(st3 == st2)           // 비교 불가능. 각각을 비교해야함
        printf("equal\n");
       else
        printf("not equal\n"); */

}
