#include <stdio.h>

int payment(float a , int b){

    float result = a*b;
    return result;

}
int calNum(int a , int b){
    return a*b;

}

int main(void) {

    int num1=21;
    int num2=0;
    printf("21�� �������� �Է��ϼ���");
    scanf("%d",&num2);
    printf("%.2f\n",(float)num1/num2);


    int k = 4;
    int* ptr = &k;
    printf("&k�� �ּҰ� : %#x\n",ptr);
    printf("%d\n",*ptr);

    char ch ='a';
    char* ptrr = &ch;
    printf("%#x\n",ptrr);
    printf("%c\n",ch);

    int A = 1000;
    int B = 2000024;
    int C = 353535353;

    printf("A�� ���� : %10d\n",A);
    printf("B�� ���� : %10d\n",B);
    printf("C�� ���� : %10d\n",C);
    // -10�� 2���� ���ϱ�
    // -�� �� 10�� 2���� ���ϱ�
    // 1�� ������ ���ϱ�
    // 2�� ������ ���ϱ�

    float money1 = 3000000000000;
    double money2 = 3000000000000;

    printf("float = %.1f\n",money1);
    printf("double = %.1lf\n",money2);
    printf("������ = %.1e\n",money2);
    double kkk = 0.0456;
    printf("%.2e\n",kkk);

    //7.2e-6
    //4.6e+7
    float time = 42.5f;
    int pay = 10850;

    printf("�ñ� : %d , %.1f�ð� ����\n",pay,time);
    printf("���� = %10.1f\n",time*pay);


    float result1 =payment(time,pay);
    printf("�ñ� : %d , %.1f�ð� ����\n",pay,time);
    printf("���� = %10.1f\n",result1);

    int hiyo = calNum(5,6);
    printf("%d\n",hiyo);

    char mo = '\n';

    printf("L1 %d %d %c",28 , 10 ,mo);
    printf("L2 %d %d\n",28,10);
    printf("L3 %d \t%d\n",28,10);
    printf("L4 %d \b%d\n",28,10);
    printf("AA %d \r%d\n",18,50);

    const double PI = 3.14;
    double height = 10.0 , dia = 9.0;

    printf("�� ���� = %.2f\n",height);
    printf("�� ���� = %.2f\n",PI * dia);

    return 0;
}

