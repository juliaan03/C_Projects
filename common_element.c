#include<stdio.h>
void main()
{
    int n,low,flag=0;
    printf("Enter the range of the array :");
    scanf("%d",&n);
    int g=3;
    int h=4;
    int arr1[n];
    int arr2[g];
    int arr3[h];
    
    for(int i=0;i<n;i++)
    {
        printf("Enter the array values for the first array :");
        scanf("%d",&arr1[i]);
    }
    
    for(int i=0;i<g;i++)
    {
        printf("Enter the array values for the second array :");
        scanf("%d",&arr2[i]);
    }
    
    for(int i=0;i<h;i++)
    {
        printf("Enter the array values for the third array :");
        scanf("%d",&arr3[i]);
    }
    
    for(int j=0;j<n;j++)
    {
        low=arr1[j];
        for(int k=0;k<g;k++)
        {
            if(low==arr2[k])
            {
                for(int a=0;a<h;a++)
                {
                    if(arr2[k]==arr3[a])
                    {
                        printf("The common element is %d\n",arr1[j]);
                        flag=1;
                    }
                    else
                    {
                        continue;
                    }
                }
            }
            else
            {
                continue;
            }
        }
    }
    
    if(flag==0)
    {
        printf("There is no common element...\n");
    }
}