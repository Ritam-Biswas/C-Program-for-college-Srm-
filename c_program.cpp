#include<stdio.h>
int main(){
    int a,b;
    char operator;
    scanf("%d %d %c",&a,&b,&operator);
    switch(operator){
        case '+':
            printf("Addition : %d",a+b);
            break;
        case '-':
            printf("Subtraction : %d",a-b);
            break;
        case '*':
            printf("Multiplicaton : %d",a*b);
            break;
        case '/':
            printf("Division : %d",a/b);
            break;
        default :
            printf("Invalid input");
            break;
    }
    return 0;
}