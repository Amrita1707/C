/*
program to convert a hexadecimal number into binary without using an array.

Name : Amrita N S
Date : 15-05-2024
Description : 
Read an hexadecimal number from user.
Print the binary equivalent of the entered number in 32 bit format

Sample input and output :
Enter the hexadecimal : 11
Binary equivalent of 0x11 is : 00000000000000000000000000010001
*/

#include<stdio.h>
int main()
{
    int hex,i;
    printf("Enter the hexadecimal : ");
    scanf("%x",&hex);

    if(hex == 0)
        printf("Binary equivalent of %x is : ",hex);
    else
        printf("Binary equivalent of 0x%x is : ",hex);

    for(i = 31 ; i >= 0 ; i--)
    {
        //check Binary equivalent of num is 1 or 0
        if(hex & 1 << i)
           printf("1");
        else
           printf("0");
    }
}
