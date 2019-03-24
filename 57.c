#include<stdio.h>
void main()
{
int d,a,c,b=0,r,i=1,j=1,r1;
scanf("%d %d",&a,&c);
d=a*c;
while(d)
{
r=d%2;
d=d/2;
b=b+(i*r);
i=i*10;
}
while(j)
{
b=b/10;
r1=b%10;
j=j+1;
if(r1==1)
{
printf("%d",j);
break;
}
}
}
