//program to find whether a number can be expressed as a sum of two prime numbers
#include<stdio.h>

int main()
{
    int i = 2, j = 2, k = 2, p, q, n;
    printf ( "enter the number" );
    scanf ( "%d" , &n );
 
    for ( i = 2; i <= n / 2; i++ )    //if n is a sum of two primes then i and n-i, both should be prime. 
        {                         
          p = 0;
          q = 0;
         
          for ( j = 2; j < i; j++ )//p will remain zero only if i is prime
              {
                if( i % j == 0 )
                    p++;
              }
     
          if( p == 0 )
            {
       
              for ( k = 2; k <= n - i; k++ )
                  {
                    if( ( n - i ) % k != 0 )  //if n-i is not a prime then q can never be equal to n-i-2 
                        q++;
           
                  }
            }
            
          if( p == 0 && q == n - i - 2 )
            {
              printf("the two prime numbers are %d and %d",i,n-i);
              return 0;  
            }

        }

    printf("the number cannot be represented as a sum of two prime numbers");
    return 0;
}   
  
