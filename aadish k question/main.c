#include <stdio.h>
#include <stdlib.h>
#include<string.h>

void sort(char *s)
{
    char t[100]={0},max=0;int i,j=0,k,l,p;
    k=strlen(s);
    for(p=0;p<k;p++)
    {for(i=0;i<k;i++)
    {
        if(max<s[i])
           {

            max=s[i];
            l=i;
            }

    }
    t[j++]=max;
    max=0;
    s[l]=0;
    }
    for(i=0;i<k;i++)
    {
        printf("%c ",t[i]);
    }
}

int main()
{
    char s[100];
    scanf("%s",s);
    sort(s);
    return 0;
}
