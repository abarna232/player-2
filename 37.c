#include<stdio.h>
void main()
{
int d,b=0,i=1,r,r1,j=1;
scanf("%d",&d);
while(d)
{
r=d%2;
d=d/2;
b=b+(i*r);
i=i*10;
}
while(j)
{
r1=b%10;
b=b/10;
if(r1==1)
{
printf("%d",j);
break;
}
j=j*2;
}
}
