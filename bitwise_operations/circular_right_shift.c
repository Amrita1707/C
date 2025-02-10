/*
Name:Amrita
Date:10/02/2025
Description:program to implement Circular right shift
Read a number num from user.
Read a number n from user.
Pass num and n to the function.
Shift num, n times (towards right).
While shifting the shifted bits should get replaced at the alternate end.
For right shifting, the shifted bits should come at left most side.
Return the new number from the function.
Print the new number.

Sample input:
Enter num: 12
Enter n : 3
Sample output:
Result : 10000000 00000000 00000000 00000001
*/

#include <stdio.h>

//Function declaration
int circular_right(int, int);
int print_bits(int);

int main()
{
    int num, n, ret;
    
    //Read num and n from user
    printf("Enter the num:");
    scanf("%d", &num);
    printf("Enter n:");
    scanf("%d", &n);
    
    //Call a function for circular right shifting and store its result to ret
    ret = circular_right(num, n);
    
    //Call a function for printing 32bits of the number 
    print_bits(ret);
}

//Function defnition
int circular_right(int num, int n)
{
    //Typecasting entered number then right shift that number to 'n' times
    //Left shift the entered number to '32-n' times.
    //Finally add these bits use or '|' operator.
    int  r=(unsigned)num >> n | ( num << 32-n );
    return r;
}

int print_bits(int bits)
{
    int i;
    //Printing 32 bits after the circular right shifting.
    printf("Result in Binary : ");
    for(i = 31 ; i >= 0 ; i--)
    {
        if( bits & 1 << i )
            printf("1 ");
        else
            printf("0 ");
    }
  }            
