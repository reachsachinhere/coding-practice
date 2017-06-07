#include<stdio.h>
#include<stdlib.h>

void main()
 {
    int a[1000] , b[1000] , n , i , p = 0;
    printf(" enter the number of round participants n ( 2 < = n < = 1000 ) ");
    scanf( "%d" , &n );
    
    for ( i = 0; i < n; i++ )
      {
         scanf ( "%d%d" , &a[i], &b[i] );
      }
 
    for ( i = 0; i < n; i++ )
       {
         if ( a[i]!=b[i] )
           {
             printf("rated ");
             exit(0);
           }
   
          else if ( i < n-1 && a[i] < a[i+1] )
                 p++;
   
       }

     if ( i == n && p > 0 )
     printf("unrated ");
    
     else
         printf("maybe ");
 
    exit(0);
 } 
  
 
 
