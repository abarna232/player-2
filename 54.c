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
if(a[i-1]>=97 &&a[i-1]<=122)
{
a[i-1]=a[i-1]-32;
}
}
}
for(i=0;i<n;i++)
{
printf("%c",a[i]);
}
}
