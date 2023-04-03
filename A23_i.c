// A c program to display contents of a file 

#include<stdio.h>

void main()
{
    FILE *fp;
    char ch;
    // fopen : used to open a file
    //r: read only
    //w: write only
    //a: append
    //r+: read and write...file needs to be created
    //w+: read and write
    //a+
    fp=fopen("sample.txt","r");
    printf("\n Contents of the file are :\n ");
    ch=fgetc(fp);
    //getc(): read char from console
    //fgetc(): read a char from file
    //putc(): display on console
    //fputc(): display/write on the file
    while(ch!=EOF)
    {
        printf("%c",ch);
        ch=fgetc(fp);
    }
    fclose(fp);
    
}