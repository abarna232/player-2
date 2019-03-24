#include<stdio.h>
void main()
{
int a,c,d,b=0,i=1,r,r1,j=0;
scanf("%d %d",&a,&c);
d=a*c;
while(d)
{
r=d%2;
d=d/2;
b=b+(i*r);
i=i*10;
}
while(b)
{
b=b/10;
r1=b%10;
if(r1==1)
{
j++;
}
}
printf("%d",j);
}
