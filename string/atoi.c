/*
WAP to implement atoi function
Name:Amrita
Date:07/02/2025
Description:program to implement atoi function
Sample input:
Enter a numeric string: 12345
Sample output:
String to integer is 12345
*/

#include <stdio.h>

int my_atoi( char []);

int main()
{
    char str[20];
    
    printf("Enter a numeric string : ");
    scanf("%s", str);
    printf("String to integer is %d\n", my_atoi(str));
}

int my_atoi(char str[])
{
    int i=0,res =0,num;
    // Iterate through each character of the string
    for(i=0; str[i]!='\0';i++)
    {
         // Handle signs (+ or -) at the beginning of the string
        if(str[i] == '-' || str[i] == '+')
        {
            // If there are multiple consecutive signs, return 0 (invalid input)
            if( str[i+1] == '-' || str[i+1] == '+')
            {
                res = 0;
                break;
            }
            else
            {
                // Do nothing, continue to the next characte
            }
        }
        // Check if the character is a digit (ASCII value between 48 and 57)
        else if(str[i] >= 48 && str[i] <= 57)
        {
            // Convert character to its numeric value
            num = str[i] - 48;
            // Build the integer
            res = (res * 10 ) + num;
        }
        else
          // Stop processing if a non-numeric character is encountered
          break;
    }
    // If the first character is a negative sign, make the result negative
    if(str[0] == '-')
    {
        res =  -1 * res;
    }
    return res;
}
