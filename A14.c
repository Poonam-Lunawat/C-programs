#include<stdio.h>
#include<string.h>
void main()
{
    char str1[50],str2[50];
    printf("\n Enter a string :");
    //gets(str1);
    scanf("%s",str1);
    //getchar();
    printf("\n Enter second string :");
    //gets(str2);
    scanf("%s",str2);
    
    if(strstr(str1,str2))
    {
        char *pos=strstr(str1,str2);
        int position=pos-str1;
        printf(" \n The string found  %d",position);
    }        
    else
        printf("\n string not found ");
    


}
