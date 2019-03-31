#include<stdio.h>
void main()
{
int n,i,j,k=0;
scanf("%d",&n);
for(j=0;j<=n;j++)
{
for(i=0;i<=n;i++)
{
if(i+j==n)
{
if(i==3||i==7)
{
k=1;
break;
}
}
}
}
if(k==1)
{
printf("yes");
}
else 
{
printf("no");
}
}
