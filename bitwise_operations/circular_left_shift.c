/*
Name:Amrita
Date:10/02/2025
Description:program to implement Circular left shift
Read a number num from user.
Read a number n from user.
Pass num and n to the function.
Shift num, n times (towards left).
While shifting the shifted bits should get replaced at the alternate end.
For left shifting, the shifted bits should come at right most side.
Return the new number from the function.
Print the new number.

Sample input:
Enter num: 12
Enter n : 3
Sample output:
Result in Binary: 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 1 1 0 0 0 0 0

*/

#include <stdio.h>
//function declaration.
int circular_left(int, int);
int print_bits(int);

int main()
{
    int num, n, ret;
    
    //read number and n from user.
    printf("Enter the num : ");
    scanf("%d", &num);
    printf("Enter n : ");
    scanf("%d", &n);
    
    //call a function for circular left shifting.
    ret = circular_left(num, n);
    
    //call a function for printing bits after the circular left shifting of the number.
    print_bits(ret);
}

int circular_left(int num, int n)
{
    //left shift the number by 'n' times '(num << n)''.
    //typecast number in to unsigned then right shift anwer to '32-n' times.
    //then add these bits by using or '|' operator.
    int bits= num << n | ( ( unsigned ) num >> 32-n ) ;
    return bits;
}

int print_bits(int num)
{
    int i;
    //print 32 bits after circular left shifting.
    printf("Result in Binary: ");
    for(i = 31 ; i >= 0 ; i--)
    {
        if( num & ( 1<<i ) )
            printf("1 ");
        else
            printf("0 ");
    }
}
