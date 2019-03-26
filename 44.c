#include<stdio.h>
void main()
{
int n,a[100],i;
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
if(i<=n-2)
{
if(a[i+1]%a[i]==0)
{
printf("%d ",a[i+1]);
}
}
}
}
