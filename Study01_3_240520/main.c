#include <stdio.h>
#include <stdbool.h>

void myPrint(){
    int num1=0,num2=0;
    num1=21;
    printf("21과 나눌 숫자를 입력하세요");
    scanf("%d",&num2);
    printf("num1= %d\t , num2= %d\t num1/num2= %f",num1,num2, (float)num1/num2);
}

void myData(){
    int age = 10;
    float power = 2*2;
    char name ='k';
    myPrint();
}


int main(void) {



    /*int num = 0;
    printf("정수를 입력하세요:");
    scanf("%d",&num);
    if(num>=0){
        printf("%d의 절대값은 %d입니다\n",num,num);
    }else if(num<0){
        printf("%d의 절대값은 %d입니다\n",num,-num);
    }

    int number =0;
    printf("절대값 계산할 정수를 입력하세요 :");
    scanf("%d",&number);
    int value = number>=0?number:-number;
    printf("input value : %d , absolute value : %d",number,value);*/
    /*bool tf = 0;
    int num = 0;

    while(!tf){
        printf("input Integer : ");
        scanf("%d",&num);
        if(num==0){

            break;
        }
        int value = num>=0 ? num:-num;
        printf("input value : %d absolute value %d\n",num,value);

    }*/

    myData();

    return 0;
}
