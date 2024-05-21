#include <stdio.h>
#include <math.h>
#include <stdlib.h>

#define PI = 3.14;

extern int facto(int num);
int main(void) {
    int dia = 9;
    int a = pow(9,2);

    printf("%d\n",a);

    printf("%d\n",facto(5));
    printf("%d\n",facto(4));
    printf("%d",rand()%40);
    return 0;
}

int facto(int num){
    int value=1;
    if(num==1){
        value=1;
    }else{
    value = num*facto(num-1);
    }


    return value;

}//facto

int rSum(int soo){
    int sum = 0;
    if(soo=1){
        sum = 1;
    }else{
        
    }

}
