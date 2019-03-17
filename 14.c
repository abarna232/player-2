#include<stdio.h>
void main()
{
long int a,b,c,d,p=1;
scanf("%ld %ld %ld",&a,&b,&c);
while(b)
{
p=p*a;
b--;
}
d=p%c;
printf("%ld",d);
}
