/*
Name:Amrita
Date:19/07/2023
Description:program to print 'n' bits from LSB of a number
a. Read number num from user.
b. Read number n from user.
c. Do error checking
  -> If n is greater than integer size, assign n value as sizeof integer.
d. Print n number of bits of num from LSB end.
If num is 10 and n is 12, then print last 12 bits of binary representation of 10.
The output should be -> 0 0 0 0 0 0 0 0 1 0 1 0

Sample input:
Enter the number: 10
Enter number of bits: 12
Sample output:
Binary form of 10: 0 0 0 0 0 0 0 0 1 0 1 0 
*/

#include <stdio.h>
//function declaration
int print_bits(int, int);

int main()
{
    int num, n;
    //read a number from user
    printf("Enter the number: ");
    scanf("%d", &num);
    
    //read n from user
    printf("Enter number of bits: ");
    scanf("%d", &n);
    printf("Binary form of %d: ",num);
    
    //call a function
    print_bits(num, n);
}
 //function defnition
 int print_bits(int num, int n)
 {
    int i;
    //loop for printing 'n' bits from LSB of a number
    for(i=n-1;i>=0;i--)
    {
        //check num & 1<<i first then decrement i , if it true then print 1
        if(num&(1<<i))
           printf("1 ");
        //else print 0
        else
           printf("0 ");
    }
 }

