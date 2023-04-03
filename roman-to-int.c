#include<stdio.h>
#include<string.h>

int roman_to_int(char *,int);
void main()
{
    char input[15];
    int len,i,flag;
    printf("\n enter the roman numeral : ");
    scanf("%s",&input);
    len=strlen(input);
    strupr(input);
    for(i=0;i<len;i++)
    {
        if(input[i]=='I' || input[i]=='V'||input[i]=='X' ||input[i]=='L'||input[i]=='C'||input[i]=='D'||input[i]=='M' )
        {    flag=1;
               // break;
        }
        else{
            flag=0;
            break;}
    }
    if(flag==1)
    {
             printf("\n Its a roman number");
             printf("\n the integer value of %s is %d ",input,roman_to_int(input,len));
    }   
    else    
        printf("\n not a roman number.");
}

int roman_to_int(char *s, int len){
    int i,sum=0;
    
        for(i=0;i<len;i++)
        {
            switch(s[i])
            {
                case 'I': 
                        if((s[i+1]!='V') && (s[i+1]!='X'))
                            sum=sum+1;
                        else
                            sum=sum-1;
                        break;
                case 'V': sum=sum+5;
                        break;
                case 'L': sum=sum+50;
                        break;
                case 'X': if((s[i+1]!='C')&&(s[i+1]!='L'))
                            sum=sum+10;
                          else
                            sum=sum-10;
                        break;
                case 'C':
                        if((s[i+1]!='M') &&(s[i+1]!='D'))
                            sum +=100;
                        else 
                            sum-=100;
                        break;
                case 'D':sum+=500;
                        break;
                case 'M':sum+=1000;
                        break;
            }
        }
    return sum;
    
}