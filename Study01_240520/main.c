#include <stdio.h>

int main(void) {
    printf("Hello, World!\n");



    printf("안녕하세요\n");

    printf("hi yo %s\n","kkkk");
    printf("byebyebye %s\n","gogogo");
    for(int i = 0 ; i<5; i++) {
        printf("%d\n", i);
    }
    int a = 1;
    int b = 2;
    int c ;

    c = a+b ;
    a= b;
    b = c;
    c= a+b;
    a=b;
    b = c;
    c=a+b ;
    a=b;
    b=c;
    c=a+b;
    int A = 1;
    int B = 1;
    int C =0;

    printf("1번째 수 : %d 2번째 수 : %d\n",A,B);
    for(int i =0 ; i<28;i++){
ㅇ

        C= A+B;
        printf("%d번째 수 : %d\t",i+3,C);
        A=B;
        B=C;


    }
    return 0;



}

/*
 * 피보나치수열
 *
 */