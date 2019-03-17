#include<stdio.h>
void main()
{
int n,a[100],i,p=1;
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
p=p*a[i];
}
if(p%2==0)
{
printf("even");
}
else if(p%2!=0)
{
printf("odd");
}
}
