/* Write a C program to print the following pattern 

Output:

*****
*   *
*   *
*   *
*****

*/


#include<stdio.h>
void main()
{
    int n,i,j;
    printf("Enter the rows : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(j==1 || j==n)
            {
                for(i=1;i<=n;i++)
                {
                    printf("*");
                }
                printf("\n");
            }
            else if(j!=1 || j!=n)
            {
                for(i=1;i<=n;i++)
                {
                    if(i==1)
                    {
                        printf("*");
                    }
                    else if(i==n)
                    {
                        printf("*");
                    }
                    else
                    {
                        printf(" ");
                    }
                }
                printf("\n");
            }
        }
        printf("\n");
    }
}