#include <stdio.h>

int main(void) {
    printf("Hello, World!\n");



    printf("�ȳ��ϼ���\n");

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

    printf("1��° �� : %d 2��° �� : %d\n",A,B);
    for(int i =0 ; i<28;i++){
��

        C= A+B;
        printf("%d��° �� : %d\t",i+3,C);
        A=B;
        B=C;


    }
    return 0;



}

/*
 * �Ǻ���ġ����
 *
 */