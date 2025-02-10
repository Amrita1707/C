/*
Name:Amrita
Date:10/02/2025

Description:program tp put the (b-a+1) lsb’s of num into val[b:a]
Read number num from user.
Read number val from user.
Read number a from user.
Read number b from user(a <= b <=31)
Do error checking
Check b is within limit or not.
Call replace_nbits_from_pos function by passing val, b - a + 1, b and n as arguments.
replace_nbits_from_pos(num, a, b, val);
Print the new value of i.

Sample input:
Enter the value of 'num' : 11
Enter the value of 'a' : 3
Enter the value of 'b' : 5
Enter the value of 'val': 174
Sample output:Result : 158
*/


#include <stdio.h>

int main()
{
   int num, a, b, val, no_bits, i, res;

   // Read input values from the user
   printf("Enter the value of 'num': ");
   scanf("%d", &num);
   printf("Enter the value of 'a': ");
   scanf("%d", &a);
   printf("Enter the value of 'b': ");
   scanf("%d", &b);
   printf("Enter the value of 'val': ");
   scanf("%d", &val);

   // Calculate the number of bits to replace
   no_bits = (b - a) + 1;

   // Extract the required bits from 'num'
   num = num & ((1 << no_bits) - 1);

   // Clear 'no_bits' from position 'b' in 'val'
   for(i = 0; i < no_bits; i++)
   {
      val = val & (~(1 << (b - i)));
   }

   // Shift extracted bits from 'num' to align with position 'a'
   num = num << a;

   // Combine modified 'val' with 'num' using bitwise OR
   res = val | num;

   // Print the modified value
   printf("Result : %d", res);

   return 0;
}

