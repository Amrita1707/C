/*
Program to find the no of days in the given month

Name : Amrita N S
Date : 15-05-2024

Description :
*Read the month (integer value) from 1 - 12 and display the no.of days in the given month.
*Assume the input is 1, 1 refers to January, because January is the 1st month of the year, if the input is 2 then respected month will be February and so on.
*If the input is 1, no. of days in the 1st month will be 31

Sample input and output :
Enter the Month number : 2
No. of days in the given month is 28

*/

#include<stdio.h>
int main()
{
    int n,days,flag=0;
    printf("Enter the Month number :");
    //read input from user
    scanf("%d",&n);
    //use switch to identify no of days in a month
    switch(n)
    {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            days = 31;
            break;
        case 2:
            flag = 1;
            break;
        case 4: case 6: case 9: case 11:
            days = 30;
            break;
        default:
            printf("Invalid input");
            return 1;
    }
    if(flag == 1)
    printf("No. of days in the given month is 28/29");
    else
    printf("No. of days in the given month is %d",days);
}
