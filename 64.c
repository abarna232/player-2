#include<stdio.h>
void main()
{
int a[100],n,b[100],j=0,k,m,i;
scanf("%d %d",&n,&k);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
if(a[i]<=k)
{
b[j]=a[i];
j++;
}
}
m=b[0];
for(i=0;i<j;i++)
{
if(b[i]>m)
{
m=b[i];
}
}
printf("%d",m);
}
