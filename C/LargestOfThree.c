#include<stdio.h>
int main(){
    int n1,n2,n3;
    printf("enter the three numbers\n");
    scanf("%d\n %d\n %d",&n1,&n2,&n3);
    printf("\n the numbers are n1=%d n2=%d n3=%d\n",n1,n2,n3);
    if(n1>=n2 && n1>=n3)
        printf("%d is greater",n1);
    if(n2>=n1 && n2>=n3)
        printf("%d is greater",n2);
        else
            printf("%d is greater",n3);
}
