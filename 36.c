#include<stdio.h>
void main()
{
int n,a[100],k,c=0,i;
scanf("%d %d",&n,&k);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
if(a[i]==k)
{
c++;
}
}
if(c==0)
{
printf("no");
}
else 
{
printf("yes %d",c);
}
}
