#include<stdio.h>
void main()
{
int n,a[100],b[100],c[100],i,s=0,m=0,j=0,k=0;
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
s=s+a[i];
b[j]=s;
j++;
}
for(i=j-1;i>=0;i--)
{
c[k]=b[i];
k++;
}
for(i=0;i<j;i++)
{
m=b[i]+c[i];
printf("%d ",m);
}
}
