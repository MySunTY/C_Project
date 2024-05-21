#include <stdio.h>


extern void gisa();
extern int example2();
extern int example3();
/*
 * 재귀함수
 * factorial 구하기
 * */
int example4(int a){
    int value = 1;
    if(a==1){
        value=1;
    }else{
        value= a * example4(a-1);
    }
    return value;





}

int main(void) {

    int i = 0;
    int sum = 0;
    for(int i = 1 ; i<=10; i++){
        if( i%3 == 0){
            sum+=i;
        }
    }
    printf("%d\n",sum);

    gisa(2);
    gisa(3);
    gisa(4);

    return 0;
}

void gisa(int a){
    switch(a){
        case 2 :
            example2();
            break;
        case 3 :
            example3();
            break;
        case 4 :


            printf("%d",example4(5));
    }
}
int example2(){
    int num = 0;
    int i, j ;
    for(int i = 1 ; i<=3 ; i++){
        for(int j = 1; j<=5 ; j++){
            num = i*j;
        }
    }//for
    printf("%d\n",num);

}
int example3(){
    int a = 0 , i;
    for(i=3 ; i<100 ; i*=3){
        a+=i;
    }
    printf("%d\n",i);

}



