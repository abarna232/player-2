#include<stdio.h>
void main()
{
char a[100];
int i,c=0,d=0;
scanf("%s",a);
for(i=0;a[i]!='\0';i++)
{
c++;
}
for(i=0;a[i]!='\0';i++)
{
if(a[i]=='a' ||a[i]=='b')
{
d++;
}
}
if(c==d)
{
printf("yes");
}
else if(c!=d)
{
printf("no");
}
}
