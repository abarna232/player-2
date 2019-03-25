#include<stdio.h>
void main()
{
int a[100],b[100],n,i,k;
scanf("%d %d",&n,&k);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<k;i++)
{
scanf("%d",&b[i]);
}
for(i=0;i<k;i++)
{
printf("%d ",b[i]);
}
for(i=0;i<n;i++)
{
printf("%d ",a[i]);
}
}
