/*
WAP to get 'n' bits of a given number  
Name:Amrita
Date:04/02/2025
Description:program to get 'n' bits of a given number
Sample input:
Enter the number: 10
Enter number of bits: 3
Sample output:Result = 2
*/

#include <stdio.h>
//function declaration
int get_nbits(int, int);

int main()
{
    int num, n, res = 0;
    //read a number from user
    printf("Enter the number: ");
    scanf("%d",&num);
    
    //read a number from user for which bits you need to get
    printf("Enter number of bits: ");
    scanf("%d",&n);
    
    //call a function and store its result to a variable res
    res = get_nbits(num, n);
    
    //print result
    printf("Result = %d\n", res);
}

//function defnition
int get_nbits(int num,int n)
{
    int r;
    //operation for get 'n' bits of a given number
    r=num & ( (1<<n) -1);
    return r;
}

