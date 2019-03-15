#include<stdio.h>
void main()
{
int n,a[100],i,s=0;
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
if(i<=n-2)
{
s=s+(a[i]+a[i+1]);
}
}
printf("%d",s);
}
