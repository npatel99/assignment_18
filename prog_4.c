/*Write a function to transform string into uppercase*/

#include <stdio.h>

void toUpperCase(char str[])
{
    int i;
    for(i=0; str[i]!='\0'; i++)
    {
        if(str[i]>='a' && str[i]<='z')
            str[i] = str[i]-32;
    }
    printf("string in uppercase : %s", str);
}

int main()
{
    char str[100];
    printf("Enter the string: ");
    fgets(str, 100, stdin);
    
    toUpperCase(str);
    
}
