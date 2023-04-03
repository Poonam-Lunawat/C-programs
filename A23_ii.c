// Write a C program to merge two files into a third file
#include<stdio.h>
void main()
{
    FILE *fp1,*fp2,*fp3;
    char ch[50],ch1[50];
    fp1=fopen("sample1.txt","r");
    fp2=fopen("sample2.txt","r");
    fp3=fopen("sample3.txt","a");
    fscanf(fp1,"%[^EOF]s",ch);
    fprintf(fp3,"%s",ch);
    fprintf(fp3,"%s","\n");
    fscanf(fp2,"%[^EOF]s",ch1);
    fprintf(fp3,"%s",ch1);
    fprintf(fp3,"%s","\n");
    fclose(fp1);
    fclose(fp2);
    fclose(fp3);
    fp3=fopen("sample3.txt","r");
    //fgets(ch1,50,fp);
    fscanf(fp3,"%[^EOF]s",ch1);
    puts(ch1);
    fclose(fp3);

}