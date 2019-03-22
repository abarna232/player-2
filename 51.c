#include<stdio.h>
void main()
{
char a[100];
int i,c=0,l=0;
scanf("%s",a);
for(i=0;a[i]!='\0';i++)
{
c++;
}
for(i=0;i<c;i++)
{
if(a[i]=='a' || a[i]=='b')
{
l++;
}
}
if(c==l||l==c-1)
{
printf("yes");
}
else 
{
printf("no");
}
}
