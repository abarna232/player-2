#include<stdio.h>
void main()
{
char a[100],b[100];
int i,j,c=0,l=0,n=0;
scanf("%s %s",a,b);
for(i=0;a[i]!='\0';i++)
{
c++;
}
for(i=0;b[i]!='\0';i++)
{
l++;
}
for(i=0;i<l;i++)
{
for(j=0;j<c;j++)
{
if(a[i]==b[j])
{
n++;
break;
}
}
}
if(n==l)
{
printf("true");
}
else 
{
printf("false");
}
}
