/*
Write a code to display the following output
Output:
*
***
*****
*****
***
*
*/
  #include<stdio.h>
  void main()
  {
      int a,i,j;
      printf("Enter the number : ");
      scanf("%d",&a);
      for(i=1;i<=a;i++)//row
      {
          if(i%2!=0)
          {
              for(j=1;j<=i;j++)//column
                {
                    printf("*");
                }
          }
          else
          {
                continue;
          }
          printf("\n");
      }
      
          for(i=a;i>=0;i--)
          {
              if(i%2!=0)
              {
                  for(j=1;j<=i;j++)
                  {
                  printf("*");
                  }
                  printf("\n");
                  a--;
              }
              else
                {
                  a--;
                }
          
          }
  }