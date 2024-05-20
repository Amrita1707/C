/*
c program to separate odd and even integers into separate arrays.

Name : Amrita N S
Date : 18-05-2024

Sample input :
Input the size of array : 5
Input 5 elements to the array :
element -> 0 : 25
element -> 1 : 47
element -> 2 : 42
element -> 3 : 56
element -> 4 : 32

Sample Output  :
Even elements : 42 56 32
Odd elements : 25 47

*/

#include<stdio.h>
int main()
{
    int n,i,j,k,l,m,p,flag=0;
    
    // Prompt the user to input the size of the array
    //printf("Input the size of array : ");
    scanf("%d",&n);
    
    // Declare the array with the given size
    int arr[n],odd[n],even[n];
    
    // Prompt the user to input elements into the array
    //printf("Input %d elements to the array : ",n);
    for(i = 0 ; i < n ; i++)
    {
       //printf("element -> %d : ",i);
       scanf("%d",&arr[i]); 
    }
    
    // Loop to separate odd and even elements
    for( j = 0 ; j < n ; j++)
    {
        // If the array element is zero, set the flag to indicate the presence of zero
        if(arr[j] == 0)
        {
            // Move to the next element in the array
            flag = 1;
            // Move to the next element in the array
            j++;
        }
        
        if(arr[j] % 2 == 0)
        {
            // If the element is even, store it in the even array
            even[k] = arr[j];
            // Increment the even array index
            k++;
        }
        
        else
        {
            // If the element is odd, store it in the odd array
            odd[l] = arr[j];
            // Increment the odd array index
            l++;
        }
    }
        
    printf("Even elements : ");
    for( m = 0 ; m < k ; m++)
    {
        printf("%d ",even[m]);
    }
    
    printf("\n");
    printf("Odd elements : ");
    for( p = 0 ; p < l ; p++)
    {
        printf("%d ",odd[p]);
    }
    
    printf("\n");
    if(flag == 1)
    {
        printf("0 is neither even nor odd");
    }
    
    return 0;
    
}
