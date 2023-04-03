#include<stdio.h>
#include<string.h>
void main()
{
    char str[20];
    int i,len,pos;
    printf("\n Enter the numbrer in binary format :");
    scanf("%s",str);
    len=strlen(str);
    for(i=len-1;i>-1;i--)
    {
        if(str[i]=='1')
        {
            pos=i;
            //printf("%d",pos);
            break;
        }
    }
    for(i=pos-1;i>-1;i--)
    {
        if(str[i]=='0')
            str[i]='1';
        else
            str[i]='0';
    }
    printf("\n 2's complimet is : %s",str);

}