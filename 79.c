#include<stdio.h>
void main()
{
int x,y,b=0,d,r,i=1,c=0,r1;
scanf("%d %d",&x,&y);
d=x^y;
while(d)
{
r=d%2;
d=d/2;
b=b+(i*r);
i=i*10;
}
while(b)
{
r1=b%10;
if(r1==1)
{
c++;
}
b=b/10;
}
printf("%d",c);
}
