#include<stdio.h>

 int main()
{
    int n,space, i, j;
    long double coef;
    printf("Enter number of rows: ");
    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
        for(space=1; space<=n-i-1; space++)
            printf(" ");

        for(j=0; j <= i; j++)
        {
            if (j==0 || i==0)
                coef = 1;
            else
                coef=coef*(i-j+1)/j;

            printf("%Lf",coef);
        }
        printf("\n");
    }
return 0;
}
