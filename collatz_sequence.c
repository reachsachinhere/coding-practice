/*The following iterative sequence is defined for the set of positive integers:

n → n/2 (n is even)
n → 3n + 1 (n is odd)

Using the rule above and starting with 13, we generate the following sequence:
13 → 40 → 20 → 10 → 5 → 16 → 8 → 4 → 2 → 1

It can be seen that this sequence (starting at 13 and finishing at 1) contains 10 terms. Although it has not been proved yet (Collatz Problem), it is thought that all starting numbers finish at 1.

Which starting number, under one million, produces the longest chain?*/

#include <stdio.h>

int main() 
{
     long long int i, n, k, p = 0, max = 1, q=1; //max-the number of steps in the chain, q-the number with greatest max
     printf( "Enter a number: " );               //n-the bound upto which we have to check every number's sequence 
     scanf( "%lld", &n );
     for( i = 2; i <= n; i++ )                  //a for loop to check sequence of every no from 2-n                   
        {
          k=i;
          p=0;
          while( k != 1 )                       //a while loop to calculate the number of steps(variable p) in a c sequence of a no  
               {
                 if(k%2==0)
                    k=k/2;
                 
                 else
                     k=3*k+1;
                 p++;
               }
        
          if( p > max )                        
            {
              max=p;
              q=i;
            } 
              
        }
      
     printf( "%lld %lld", max+1, q );      //as the no of terms is 1 more than the no steps so it is max+1
     return 0;
}   
 
  
                 
