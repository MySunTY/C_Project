#include <stdio.h>

void chChar(char a){
    printf("%d",a);

}
void capChar(char a){
    if(("%d",a)<91){
        printf("%c",a+32);
    }else if(("%d",a)>91){
        printf("%c",a-32);
    }

}

int main(void) {
    char ch;
    printf("���ĺ��� �Է��ϼ���");
    scanf("%c",&ch);
    capChar(ch);

    return 0;
}
