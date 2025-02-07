/*
Name:Amrita
Date:07/02/2025
Description:program to define a macro swap (t, x, y) that swaps 2 arguments of type t
Sample input:
1. Int
2. char
3. short
4. float
5. double
6. string
Enter you choice : 1
Enter the num1 : 10
Enter the num2 : 20

Sample output:
After Swapping :
num1 : 20
num2 : 10
*/


#include <stdio.h>
#include <string.h>

// Define a macro to swap basic data types
#define swap(t, x, y)  { \
    t temp = x; \
    x = y; \
    y = temp; \
} 

// Define a macro to swap strings (arrays of characters)
#define swap_strings(x, y) { \
    char temp[100]; \
    strcpy(temp, x); \
    strcpy(x, y); \
    strcpy(y, temp); \
} 

int main() 
{
    int choice;
    printf("1. Int\n2. Char\n3. Short\n4. Float\n5. Double\n6. String\nEnter your choice: ");
    //Read choice from user
    scanf("%d", &choice);

    switch (choice) 
    {
        case 1: 
        {
            // Handling int
            int num1, num2;
            printf("Enter the num1: ");
            scanf("%d", &num1);
            printf("Enter the num2: ");
            scanf("%d", &num2);
        
            swap(int, num1, num2);
            printf("After Swapping:\nnum1: %d\nnum2: %d\n", num1, num2);
            break;
        }
        case 2: 
        {
            // Handling char
            char char1, char2;
            printf("Enter the char1: ");
            // Use a space before %c to consume any previous newline character
            scanf(" %c", &char1); 
            printf("Enter the char2: ");
            scanf(" %c", &char2);
            
            swap(char, char1, char2);
            printf("After Swapping:\nchar1: %c\nchar2: %c\n", char1, char2);
            break;
        }
        case 3: 
        {
            // Handling short
            short short1, short2;
            printf("Enter the short1: ");
            scanf("%hd", &short1);
            printf("Enter the short2: ");
            scanf("%hd", &short2);
           
            swap(short, short1, short2);
            printf("After Swapping:\nshort1: %hd\nshort2: %hd\n", short1, short2);
            break;
        }
        case 4: 
        {
            // Handling float
            float float1, float2;
            printf("Enter the float1: ");
            scanf("%f", &float1);
            printf("Enter the float2: ");
            scanf("%f", &float2);
            
            swap(float, float1, float2);
            printf("After Swapping:\nfloat1: %.2f\nfloat2: %.2f\n", float1, float2);
            break;
        }
        case 5: 
        {
            // Handling double
            double double1, double2;
            printf("Enter the double1: ");
            scanf("%lf", &double1);
            printf("Enter the double2: ");
            scanf("%lf", &double2);
           
            swap(double, double1, double2);
            printf("After Swapping:\ndouble1: %.2lf\ndouble2: %.2lf\n", double1, double2);
            break;
        }
        case 6: 
        {
            // Handling string (array of characters)
            char string1[100], string2[100];
            printf("Enter the string1: ");
			scanf(" %[^\n]", string1);
            printf("Enter the string2: ");
            scanf(" %[^\n]", string2);
            
            swap_strings(string1, string2);
            printf("After Swapping:\nstring1: %s\nstring2: %s\n", string1, string2);
            break;
        }
        default:
            printf("Invalid choice\n");
            break;
    }
    return 0;
}
