#include<stdio.h>
void main()
{
int a[100],b[100],m,n,i,j,c[100],k=0;
scanf("%d %d",&n,&m);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<m;i++)
{
scanf("%d",&b[i]);
}
for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
{
if(a[i]==b[j])
{
c[k]=b[j];
k++;
b[j]='\0';
break;
}
}
}
for(i=0;i<k;i++)
{
printf("%d ",c[i]);
}
}
