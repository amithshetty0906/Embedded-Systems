#include<stdio.h>
#include<string.h>

int main(){
    char s[3][3]={"am","it"};
    //strcat(s[0],s[1]);
    //printf("%s",s);
    char concat(char s1[20],char s2[20]);
    printf("%s",s[0]);
}

char concat(char s1[20],char s2[20]){
    int i=0;
    while(s1[i]!='\0'){
            i++;
    }
    int j=0;
    while(s1[j]!='\0'){
        s1[i]=s2[j];
        i++;
        j++;
    }
    s1[i]='\0';


}




















