#include<stdio.h>
#include<string.h>
void insert(char *str1,char *str2,int pos)
{
    int len1,len2,i,j;
    char str3[50];
    len1=strlen(str1);
    len2=strlen(str2);
    if(pos<=len1){
        strncpy(str3,str1,pos);
        str3[pos]='\0';
        strcat(str3,str2);
        strcat(str3,str1+pos);
        // for(i=pos,j=strlen(str3);i<len1 && j<(len1+len2);i++,j++)
        // {
        //     str3[j]=str1[i];
        // }
        str3[len1+len2]='\0';
        puts(str3);
    }
    else
        printf("\n Wrong position");

}
void main()
{
    char str1[50],str2[50],str3[50],str4[50];
    int len1,len2,pos;
    int i,j,k;
    printf("\n Enter a string :");
    gets(str1);
    printf("\n Enter second string :");
    gets(str2);
    printf("\n Enter the position where you want to insert the second string :");
    scanf("%d",&pos);
    insert(str1,str2,pos);
}
// void main()
// {
//     char str1[50],str2[50],str3[50],str4[50];
//     int len1,len2,pos;
//     int i,j,k;
//     printf("\n Enter a string :");
//     gets(str1);
//     printf("\n Enter second string :");
//     gets(str2);
//     printf("\n Enter the position where you want to insert the second string :");
//     scanf("%d",&pos);
//     len1=strlen(str1);
//     len2=strlen(str2);
//     if(pos<=len1){
//         strncpy(str3,str1,pos);
//         str3[pos]='\0';
//         strcat(str3,str2);
        
//         for(i=pos,j=strlen(str3);i<len1 && j<(len1+len2);i++,j++)
//         {
//             str3[j]=str1[i];
//         }
//         str3[len1+len2]='\0';
//         puts(str3);
    
//     }
//     else
//         printf("\n Wrong position");
// }
