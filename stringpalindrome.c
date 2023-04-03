
#include <stdio.h>
#include<string.h>
void main()
{
    char ch[10];
    char str[]={'a','b','c'};
    int flag=0,len;
    printf("\n Enter a string :");
    scanf("%s",ch);
    len=strlen(ch);
    printf("\n the string is : %s",str);
    printf("\n the string is : %s",ch);
    printf("\n lenght of string  : %d",len);
    for(int i=0;i<len;i++)
    {
        if(ch[i]!=ch[len-i-1])
        {
            flag=1;
            break;
        }
    }
    if(flag)
        printf("\n not a palindrome");
    else
        printf("\n Its palindrome");
}