#include<stdio.h>
void main()
{
    int n,i,j;
    printf("Enter the rows : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
       if(i==1)
       {
        for(j=i;j<=n;j++)
        {
            printf("*");
        }
        printf("\n");
       }
       else
       {
           for(j=1;j<=n;j++)
           {
               if(j!=n/2)
               {
                   printf(" ");
               }
               else
               {
                   printf("*");
               }
           }
           printf("\n");
       }
    }
}