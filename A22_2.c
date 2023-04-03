//reverse n characters using input from command line argument
#include<stdio.h >
#include<string.h>
#include<stdlib.h>
void main(int argc, char *argv[])
{
 FILE *fs, *fd;
 char s[20], d[20],d1[20];
 int  count = 0, n,i,j;
 
 strcpy(s, argv[1]); // source file name

 n = atoi(argv[2]); // to convert char to integer

 fs = fopen(s, "r"); //open a file in read mode

 if(s == NULL)
    printf("\n FILE ERROR");

 printf("\n SOURCE FILE :\n");
 while(!feof(fs))
 {
     printf("%c", fgetc(fs));
   
 }

 fclose(fs);
 fs = fopen(s, "r+");
 count = 0;
 while(count < n)
 {
  d[count] = fgetc(fs);
  count++;
 }
d[count] = '\0';

// to reverse string
j=n-1;
for(i=0,j=n-1;i<n && j>-1;i++,j--)
{
    d1[i]=d[j];
}

 fseek(fs, 0L, SEEK_SET);
 fputs(d1, fs);
 fclose(fs);
 fs = fopen(s,"r");
 while(!feof(fs))
 {
     printf("%c", fgetc(fs));
 }
 fclose(fs);
 //getch();
}