/*
Program to find whether a give year is leap year or not

Name : Amrita N S
Date : 15-05-2024
Description : 

Read the year (integer) from user.
Check the given year is leap year or not.
Check for the special cases, like century years.
Example, 1700 is not a leap year but 2000 is leap year

Sample input and output :
Enter the number : 2016
2016 is a leap year

*/

#include<stdio.h>
int main()
{
    int y;
    printf("Enter the year :");
    scanf("%d",&y);
    
    //leap year perfectly divisible by 4000
    if(y % 400 == 0)
        printf("%d is a leap year",y);
    //year divisible by 100 is not a leap year. it is a century.
    else if( y % 100 == 0)
        printf("%d is not a leap year",y);
    //year divisibe by 4 is leap year
    else if(y % 4 == 0)
        printf("%d is a leap year",y);
    //other year not a leap year
    else
        printf("%d is not a leap year",y);
}
