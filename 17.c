#include<stdio.h>
void main()
{
char a[100];
int i,n=0;
scanf("%s",a);
for(i=0;a[i]!='\0';i++)
{
n++;
}
for(i=n-1;a[i]!='\0';i--)
{
if(i!=0)
{
printf("%c-",a[i]);
}
else if(i==0)
{
printf("%c",a[i]);
}
}
}
