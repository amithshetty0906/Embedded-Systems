#include<stdio.h>
int basepower(int base ,int a);

int main(){
    int base,a,result;
    printf("enter the base number ");
    scanf("%d",&base);
    printf("\n");
    printf("enter the power of base ");
    scanf("%d",&a);
    printf("\n");
    result = basepower(base,a);
    printf("the answer is %d",result);
    printf("\n");


}

int basepower(int base,int a){
    if(a!=0)
        return (base * basepower(base, a - 1));
    else
        return 1;
}
