#include<stdio.h>
int largest_palindrome( int n);
int ispalindrome(int a);
int main()
{
 int n; 
 printf("Enter the number of digits ");
 scanf("%d",&n);
 int k=largest_palindrome(n);
 printf("%d",k);
 return 0;
}

int largest_palindrome( int n)
{
   int b=1;
   for(int i=0;i<n;i++)
      {
       b=b*10;
       }
      int lower_limit=b/10;
      int upper_limit=b-1;
      int max=1;

 for(int i=upper_limit;i>=lower_limit;i--)
    {
      if(i*i<max)
       {  
         return max;
       } 
      
      for(int j=i;j>=lower_limit;j--)
        { 
          int a=j*i;
          if(a<max)
           break; 
          if(ispalindrome(a)&&a>max)
           {
            max=a;
            break;
           }
       
         }
     }
}


int ispalindrome(int a)
{ 
  int p=a,q=0;
  while(p!=0)
  {
    q=(10*q)+(p%10);
    p=p/10;
  }
  
  if(q==a)
   return 1;
  else
   return 0;
} 
  





    
   






         
          
          
     

 
 
