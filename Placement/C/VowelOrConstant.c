#include<stdio.h>

int main(){
    char c;
    printf("enter the character\n");
    scanf("%c",&c);
    int lower_case,upper_case;
    lower_case=(c=='a'||c=='e'||c=='i'||c=='o'||c=='u');
    upper_case=(c=='A'||c=='E'||c=='I'||c=='O'||c=='U');
    if(c==lower_case||c==upper_case)
        printf("it is vowel\n");
    else
        printf("it is a constant");
    return 0;

}
