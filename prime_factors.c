#include<stdio.h>
int is_prime( int i );

int main()
 {
   int n , i , k ;
   printf ( "Enter a number less than 500000 :::" );
   scanf ( "%d" , &n );
 
   for ( i = 2; i <= n; i++ )
       {
           if ( n % i == 0 && is_prime(i) )
              {
                printf ("%d ",i);
                n = n/i; 
                i--;
              }
         
           else if ( i > n/2 )
                   {
                     printf( "%d ",n);
                     break;
                   }
        }
    
   return 0;
 }

int is_prime( int i )
 {
    int j , p=0 ;
    for( j = 2; j <= i/2; j++)
       {
         if ( i % j == 0 )
            p++;
       }
      
    if ( p == 0 )
       return 1;
    else 
       return 0;
 }  
           
