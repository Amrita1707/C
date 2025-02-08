/*
Name:Amrita
Date:08/02/2025
Description:Program to swap a nibble using bit fields.
Sample input:
Enter the hexadecimal value : AB
Sample output:
After swap nibble : BA
*/


#include <stdio.h>
struct byte 
{
    unsigned int l : 4;
    unsigned int h : 4;
};

int main() {
    struct byte var;
    // Buffer to store input
    char input[10];  
    unsigned int num;

    // Read input as a string to preserve case
    printf("Enter a hexadecimal number: ");
    scanf("%s", input);

    // Convert input to an integer
    sscanf(input, "%x", &num);

    // Extract lower and higher 4 bits
    var.l = num & 0xF;
    var.h = (num >> 4) & 0xF;

    // Determine case based on first character
    if ((input[0] >= 'A' && input[0] <= 'F') || (input[0] >= '0' && input[0] <= '9')) {
         // Uppercase output
        printf("%X%X\n", var.l, var.h); 
    } else 
    {
        // Lowercase output
        printf("%x%x\n", var.l, var.h);  
    }

    return 0;
}

