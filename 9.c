#include<stdio.h>
void main()
{
int n,a[100],s=0,b[100],k=0,i;
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
s=s+a[i];
b[k]=s;
k++;
}
for(i=k-1;i>=0;i--)
{
printf("%d ",b[i]);
}
}
