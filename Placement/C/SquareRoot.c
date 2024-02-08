#include<stdio.h>
#include<math.h>
int main(){
    double a,b,c,discriminant,root1,root2,RealPrt,ImagPart;

    printf("enter the co-effecients\n");
    scanf("%lf\n %lf\n %lf",&a,&b,&c);

    discriminant=b*b-4*a*c;

    if(discriminant>0){
        root1= (-b+sqrt(discriminant))/(2*a);
        root1= (-b-sqrt(discriminant))/(2*a);
        printf("the square roots are %lf %lf",root1,root2);
    }

    else
    if(discriminant==0){
            root1=root2=-b/(2*a);
    printf("the square roots are %lf %lf",root1,root2);
    }

    else
        RealPrt=-b/(2*a);
        ImagPart=sqrt(-discriminant)/(2*a);
        printf("root1= %.2lf + %.2lfi    root2= %.2lf - %.2lfi",RealPrt,ImagPart,RealPrt,ImagPart);

}
