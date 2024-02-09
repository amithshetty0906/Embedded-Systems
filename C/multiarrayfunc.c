#include<stdio.h>
//pass single array ti functions
/*
void display(int a1,int a2){
    printf("%d\n",a1);
    printf("%d\n",a2);
}

int main(){
    int array[]={1,2,3,4,5,6,7};
    //int c=10,d=5;
    //display(c,d);
    display(array[0],array[5]);

    return 0;
}
*/




//pass arrays to functions
/*
float calculateSum(float num[]);

int main(){
    float result, num[]={1,3,4,5,6};

    result = calculateSum(num);
    printf("Result is %2.f",result);
    return 0;
}

float calculateSum(float num[]){
    float sum =0.0;
    for(int i=0;i<6;i++){
        sum+=num[i];
    }

    return sum;
}
*/


//pass two dimensional arrays

int displayNum(int num[2][2]);

int main(){
    int num[2][2];
    printf("enter the numbers in array\n");
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            scanf("%d",&num[i][j]);
        }
    }
    displayNum(num);
    return 0;
}


int displayNum(int num[2][2]){
    printf("Displaying numbers\n");
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            printf("%d\n",num[i][j]);
        }
    }
}

