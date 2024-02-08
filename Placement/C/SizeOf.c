#include<stdio.h>

int main() {
    long double intType;
    float floatType;
    double doubleType;
    char charType;
    long longType;
//  long long longType;

    printf("Size of int: %zu bytes\n", sizeof(intType));
    printf("Size of float: %zu bytes\n", sizeof(floatType));
    printf("Size of double: %zu bytes\n", sizeof(doubleType));
    printf("Size of char: %zu byte\n", sizeof(charType));
    printf("Size of long long int :%zu bytes\n", sizeof(longType));

    return 0;
}

