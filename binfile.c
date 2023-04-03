// reading and writing to binary file
#include<stdio.h>
void main()
{
    FILE *fp;
    char ch[50],ch1[50];
    
    fp=fopen("trial.bin","ab+");
    if(fp!=NULL)
    {
        printf("\n Enter content :");
        gets(ch);
        fwrite(ch,sizeof(ch),1,fp);     

    }
    else
        printf("\n Unable to open file");
   
     fclose(fp);
     fp=fopen("trial.bin","rb");
    // fread(ch1,sizeof(ch1),1,fp);
    // puts(ch1);
    while(fread(ch1,sizeof(ch1),1,fp)==1)
    {
        puts(ch1);

    }
    
    fclose(fp);
    
}