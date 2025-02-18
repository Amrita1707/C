/*
Name:Amrita
Date:18/02/2025
Description:program to Generate consecutive NRPS of length n using k distinct character
	Suppose k = 3 (say taking 3 distinct characters ).
	Let 3 distinct characters be a , b, c.
	Suppose ‘n’ is the string length to be formed using ‘k’ distinct words.
	Let n be 6
	The string should be formed in such a way that there should not be any consecutive repetitions of the strings.
Sample input:
Enter the number characters C : 3
Enter the Length of the string N : 6
Enter 3 distinct characters : a b c
Sample output:
Possible NRPS is abcbca
*/


#include<stdio.h>

// Function to generate a Non-Repeating Pseudo-Random String (NRPS)
void nrps(char[], int, int);

// Function to check whether the generated string is a valid NRPS
void check_nprs(char[], int);

int main()
{
    int c, N, i;

    // Read the number of distinct characters from the user
    printf("Enter the number of characters C : ");
    scanf("%d", &c);
    getchar(); // Consume the newline character left in the input buffer

    char arr[c+1]; // Character array to store distinct characters (+1 for null terminator)

    // Read the length of the required NRPS string from the user
    printf("Enter the Length of the string N : ");
    scanf("%d", &N);
    getchar(); // Consume the newline character left in the input buffer

    // Read 'c' distinct characters from the user
    printf("Enter %d distinct characters: ", c);
    for(i = 0; i < c; i++)
    {
        scanf(" %c", &arr[i]); // Read character input
    }
    arr[c] = '\0'; // Null-terminate the character array

    // Call function to generate NRPS string
    nrps(arr, c, N);

    return 0;
}

// Function to generate NRPS using the given characters
void nrps(char arr[], int c, int N)
{
    int j, k = 0, i = 0, p, a, q = ((N / c) - 1), count = 0;
    char res[N]; // Array to store the generated NRPS string

    // Calculate how many cycles of 'c' characters fit into 'N'
    for(a = 0; a < N; a++)
    {
        a = ((a + c) - 1);
        count++;
    }

    // Generate the NRPS sequence by cycling through characters
    while(count)
    { 
        count--;
        for(j = 0; j < c; j++)
        {
            res[k] = arr[j]; // Store characters in sequence
            k++;
        }

        // Perform cyclic shift of characters to ensure non-repetitive sequence
        if(q--)
        {
            char temp = arr[i]; // Store first character temporarily
            p = c - 1;
            
            // Left shift the character array to create a new sequence pattern
            while(p)
            {
                arr[i] = arr[i + 1];
                i++; 
                p--;
            }
            arr[c - 1] = temp; // Place the first character at the end
            p = 0; 
            i = 0;
            res[N] = '\0'; // Null-terminate the result string
        }
    }
    
    // Print the generated NRPS string
    printf("%s\n", res);

    // Check if the generated string follows NRPS properties
    check_nprs(res, c);
}

// Function to check if the generated string is a valid NRPS
void check_nprs(char arr[], int c)
{
    int count = 0, i;

    // Check if any character repeats at a cyclic position
    for(i = 0; i < c; i++)
    {
        if(arr[i] == arr[i + c])
            count = 1;
        else
            count = 0;
    }

    // Display the result based on the check
    if(count)
    {
        printf("Error : Enter distinct characters\n");   
        printf("String is not NPRS\n");
    }
    else
    {
        printf("String is NPRS\n");
    }
}

