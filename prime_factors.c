#include<stdio.h>
int main()
{
 int n,i,k;
 printf("Enter a number");
 scanf("%d",&n);
 
 
 for(i=2;i<=n/2;i++)
  {
    if(n%i==0)
    {
      int p=0;
      for(int j=2;j<=i/2;j++)
       {
          if(i%j==0)
              p++;
           
       }
    if(p==0)
     {
      printf("%d ",i);
      k++;
     }
   }
  }
if(k==0)
printf("%d",n);
return 0;
}
