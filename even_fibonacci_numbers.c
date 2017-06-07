#include<stdio.h>

int main()
 {
   int a = 1, b = 1, sum ;  
   while ( b < 4000000 )
       {
    
         int temp=b;
                b=a+b;
                a=temp;
   
         if(b % 2==0)
           {
             printf("%d, ",b);
             sum+=b;
           } 
       }
  
   printf("%d",sum);  
   return 0;
 }
