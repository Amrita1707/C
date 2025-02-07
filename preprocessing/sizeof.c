/*
Name:Amrita
Date:07/02/2025
Description:program to define a macro SIZEOF(x), without using sizeof operator
Sample output:
Size of int : 4 bytes
Size of char : 1 byte
Size of float : 4 bytes
Size of double : 8 bytes
Size of unsigned int : 4 bytes
Size of long int : 8 bytes
*/

#include <stdio.h>
//Macro defnition.
#define SIZEOF(x) ((char*)(&x + 1) - (char*)(&x))

int main() 
{
    //Variable declaration.
    int a;
    char b;
    float c;
    double d;
    unsigned int e;
    long int f;
    short int g;
    unsigned char h;
    long double i;
    unsigned short int j;

    //Print the result.
    printf("Size of int : %ld bytes\n", SIZEOF(a));
    printf("Size of char : %ld byte\n", SIZEOF(b));
    printf("Size of float : %ld bytes\n", SIZEOF(c));
    printf("Size of double : %ld bytes\n", SIZEOF(d));
    printf("Size of unsigned int : %ld bytes\n", SIZEOF(e));
    printf("Size of long int : %ld bytes\n", SIZEOF(f));
    printf("Size of short int : %ld bytes\n", SIZEOF(g));
    printf("Size of unsigned char : %ld byte\n", SIZEOF(h));
    printf("Size of long double : %ld bytes\n", SIZEOF(i));
    printf("Size of unsigned short int : %ld bytes\n", SIZEOF(j));

    return 0;
}

