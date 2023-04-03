#include<stdio.h>
#include<string.h>

void main()
{
    char str[50],str2[50];
    int pos,n,len,i,j;
    printf("\n Enter a string :");
    gets(str);
    printf("\n Enter the position from where you want to delete characters:");
    scanf("%d",&pos);
    printf("\n How many characters you want to delete?");
    scanf("%d",&n);
    len=strlen(str);
    if(len>=(pos+n))
    {
       /* strncpy(str2,str,pos);
        str2[pos]='\0';
        for(i=pos+n,j=strlen(str2);j<len-n && i<strlen(str);j++,i++)
        {
            str2[j]=str[i];
        }
        strcpy(str,str2);
        puts(str);*/
        strncpy(str2,str,pos);
        
        strcat(str2,str+pos+n);
        puts(str2);
    }
    else
    {
        printf("Can't delete %d characcters",n);
    }
}