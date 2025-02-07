/*
WAP to check given string is Pangram or not
Name:Amrita
Date:05/02/2025
Description:program to check given string is Pangram or not
Sample input:
Enter the string: The quick brown fox jumps over the dog
Sample output:
The Entered String is not a Pangram String
*/

#include <stdio.h>
int pangram(char[]);
int main()
{
    
    //printf("enter the string");
    char arr[1000];
    
	printf("Enter the string");
    //Read a string from user.
    scanf(" %[^\n]", arr);
    //Call a function and store its result to ret.
    int ret=pangram(arr);
    if(ret == 26)
        printf("The Entered String is a Pangram String");
    else
        printf("The Entered String is not a Pangram String");
}

int pangram(char arr[])
{
    int i=0,j=0,c=0,array[26]={0};
    for(i=0; arr[i]!='\0';i++)
    {
        //Check the character of the string is lower case.
        if(arr[i] >='a' || arr[i] <='z')
        {
            //True,then find the index position.
            array[arr[i]-97] = 1;
        }
        //Check the character of the string is upper case.
        else if(arr[i] >='A' || arr[i] <='Z')
        {
            //True,then find the index position.
            array[arr[i]-65] = 1;
        }
    }
    //Run a for loop to find count.
    for(j=0; j<26; j++)
    {
        if(array[j] == 1)
        c++;
    }
    return c;
}
