/*A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.

Find the largest palindrome made from the product of two n-digit numbers.*/

#include<stdio.h>

int largest_palindrome( int n);
int ispalindrome(int a);

int main()
{
  int n; 
  printf ( "Enter the number of digits " );
  scanf ( "%d" , &n );
  int k = largest_palindrome(n);
  printf ( "%d" , k );
  return 0;
}

int largest_palindrome( int n)
{
   int b = 1;
   for ( int i = 0; i < n; i++ )                   //it is to find the largest and smallest number possible for given no of digits
      {
        b=b*10;
      }
      int lower_limit = b / 10;
      int upper_limit = b - 1;
      int max = 1;                             //max is the largest palindrome number

   for ( int i = upper_limit; i >= lower_limit; i-- ) //loop for finding the largest palindrome no
    {
      if( i*i < max ) //i is decremented with every loop.So if i^2 is less than max then there is no need to continue
        {  
          return max;
        } 
      
      for (int j = i; j >= lower_limit; j-- ) //loop for multiplying i with every number less than it and checking it if it is palindrome
          { 
            int a = j * i;
            if ( a < max ) //j is decremented with every loop.So there is no need to continue if a < max.
               break;
            
            if( ispalindrome(a) && a > max )
              {
                max = a;
                break;                       
              }
       
          }
     }
}


int ispalindrome( int a )           //this function tells whether the function is palindrome or not
{ 
  int p = a, q = 0;
  while ( p != 0 )
  {
    q = ( 10 * q ) + ( p % 10 );
    p = p / 10;
  }
  
  if( q == a )
    return 1;
  else
    return 0;
 } 
  





    
   






         
          
          
     

 
 
