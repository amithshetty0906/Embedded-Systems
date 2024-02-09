#include<stdio.h>

const int city = 2;
const int week = 7;

int main(){

    int temperature[city][week];
    for(int i=0;i<city;++i){
        for(int j=0;j<week;++j){
            printf("city %d, week %d  ",i+1,j+1);
            scanf("%d",&temperature[i][j]);
            printf("\n");
        }
    }

    printf("displaying the data\n");
    for(int i=0;i<city;i++){
        for(int j=0;j<week;j++){
            printf("city %d in week %d temp is
                   %d\n",i+1,j+1,temperature[i][j]);
        }
    }


}
