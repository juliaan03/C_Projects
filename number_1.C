1) without using array use only for loop to get this output

Qn) input : m=5,n=4


    Output :

	1 6 11 16
	2 7 12 17
	3 8 13 18
	4 9 14 19
	5 10 15 20



#include<stdio.h>
#include<conio.h>
void main()
{
int i,b,a=1,j,m=5,n=4;
clrscr();
for(i=1;i<=m;i++)
{
b=a;
for(j=1;j<=n;j++)
{
printf("%d",b);
b=b+m;
}
b=0;a=a+1;
}
}