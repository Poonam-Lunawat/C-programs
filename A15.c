#include <stdio.h>
#include <string.h>
int no_of_words(char str[]);
int no_of_char(char str[]);
int no_of_lines(char str[]);
void main()
{
    char str[50];
    printf("\n Enter a string ");
    scanf("%[^'~']]s", str);
    printf("\n The string is: %s", str);
    printf("\n length of the string is : %d", strlen(str));
    printf("\n Number of characters without space in the string are : %d", no_of_char(str));
    printf("\n No of words in the string : %d", no_of_words(str));
    printf("\n No of lines in the string : %d", no_of_lines(str));
}

int no_of_char(char str[50])
{
    int count = 0;
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] == ' ' || str[i] == '\n' || str[i] == '0')
        {
            continue;
        }
        else
            count++;
    }
    return count;
}
int no_of_words(char str[50])
{
    int count = 1;
    for (int i = 0; i < strlen(str) - 1; i++)
    {

        if ((str[i] == ' ' || str[i] == '\n'))
        {

            count++;
        }
        else
            continue;
    }
    return count;
}
int no_of_lines(char str[50])
{
    int count = 1;
    for (int i = 0; i < strlen(str) - 1; i++)
    {
        if (str[i] == '\n')
        {
            count++;
        }
        else
            continue;
    }
    return count;
}