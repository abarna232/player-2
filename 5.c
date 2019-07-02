#include <stdio.h>
void main()
{
    char a[100];
    int b,c=0,d=0,e=0,g,i,h;
    gets(a);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]=='I')
        {
            if(a[i+1]=='V')
            {
                c=4;
                break;
            }
            else if(a[i+1]=='X')
            {
                c=9;
                break;
            }
            else
            c=c+1;
        }
        else
        {
            if(a[i]=='V')
            {
                d=d+5;
            }
            if(a[i]=='X')
            {
                e=e+10;
            }
        }
    }
    g=c+d+e;
    printf("%d",g);
}
