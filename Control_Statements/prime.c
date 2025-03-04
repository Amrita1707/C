/*


 */

#include <stdio.h>

int main()
{
   int num,i,flag=0;
   printf("Enter a number: \n");
   scanf("%d",&num);
    if(num < 0)
      printf("Invalid input");
    else
    {
   for(i=2; i<num; i++)
   {
        if(( num % i) == 0)
        {
            flag=1;
        }
   }
   if(flag)
    printf("%d is not a prime number\n",num);
   else
    printf("%d is a prime number\n",num);
    return 0;
    }
}
