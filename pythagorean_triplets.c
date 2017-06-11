/*A Pythagorean triplet is a set of three natural numbers, a < b < c, for which, a^2 + b^2 = c^2

For example, 3^2 + 4^2 = 9 + 16 = 25 = 52.

There exists exactly one Pythagorean triplet for which a + b + c = 1000.
Find the product abc.*/

#include <stdio.h>

int main()
{
  int a, b;

  for (a = 1; a <= 333; a++)             //Atleast one number has to be smaller than 333. If not than their sum will exceed 1000. 
      {
        for (b = 1; b <= 500; b++)       //2nd number should be < 500 because c is the largest number and if b>500 then c has to be <500 that 
            {                            //means c<b, which is not possible.
              int c = (1000 - a - b);
              
              if (a*a + b*b == c*c) 
                 {
                  printf("a=%d, b=%d c=%d and abc = %d ", a , b , c , a*b*c );
                 }
            }
      }
  return 0;
}


