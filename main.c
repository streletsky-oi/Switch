#include <stdio.h>
#include <math.h>
int main(){
    float a, b, c;
    char oper;
    printf("Put in two numbers\n");
    scanf("%f %f", &a, &b);
    printf("Put in operation + - * / \n");
    scanf(" %c", &oper);
    switch (oper){
        case '+':
            c = a + b;
            printf("sum is %f \n", c); break;
        case '-':
            c = a - b;
            printf("diff is %f \n", c); break;
        case '*':
            c = a * b;
            printf("multi is %f \n", c);break;
        case '/':
            c = a / b;
            printf("chast is %f \n", c);break;
        
    }




}