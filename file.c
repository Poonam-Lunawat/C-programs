#include<stdio.h>
void main()
{
    FILE *fp;
    char ch[50],ch1[50];
    //char ch;
    fp=fopen("try.txt","a+");
    if(fp!=NULL)
    {
        printf("\n Enter content :");
        gets(ch);
      //  fputs(ch,fp);
        fprintf(fp,"%s","\n");      
        fprintf(fp,"%s",ch);     

    }
    else
        printf("\n Unable to open file");
   
     fclose(fp);
     fp=fopen("try.txt","r");
    //fgets(ch1,50,fp);
    fscanf(fp,"%[^EOF]s",ch1);
    puts(ch1);
    fclose(fp);
    
}