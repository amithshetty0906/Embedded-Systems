#include<stdio.h>

int main(){
    char op;
    float num1,num2;
    printf("enter the operands (+ , - , /)\n");
    scanf("%c",&op);

    printf("enter two numbers\n");
    scanf("%f %f",&num1,&num2);

    switch(op){
        case'+':
            printf("%.1lf + %.1lf = %.1lf", num1, num2, num1 + num2);
            break;
        case '-':
            printf("%.1lf - %.1lf = %.1lf", num1, num2, num1 - num2);
            break;
        case '*':
            printf("%.1lf * %.1lf = %.1lf", num1, num2, num1 * num2);
        break;
        case '/':
            printf("%.1lf / %.1lf = %.1lf", num1, num2, num1 / num2);
            break;
    
        default:
            printf("Error! operator is not correct");
  }

  return 0;
}
       
