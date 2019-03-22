#include<stdio.h>
void main()
{
char a[100];
int i,k,n=0;
scanf("%s %d",a,&k);
for(i=0;a[i]!='\0';i++)
{
n++;
}
for(i=0;i<=n;i++)
{
if(i%k==0)
{
printf("%c ",a[i-1]);
}
}
}
