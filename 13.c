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
        if(a[2]=='/')
        {
            if((a[0]<'4'&&a[1]<'2')||(a[0]<'3'&&a[1]<='9'))
            {
                if(a[5]=='/')
                {
                    if((a[3]<'2'&&a[4]<'3')||(a[3]<'1'&&a[4]<='9'))
                    {
                        if(a[6]<='9'&&a[7]<='9'&&a[8]<='9'&&a[9]<='9')
                        {
                            l++;
                        }
                    }
                }
            }
        }
    }
    if(l!=0)
    {
        printf("yes");
    }
    else 
    {
        printf("no");
    }
}
