/*Write a function to transform a string into lowercase*/

#include <stdio.h>

void toLowerCase(char str[])
{
    int i;
    for(i=0; str[i]!='\0'; i++)
    {
        if(str[i]>='A' && str[i]<='Z')
            str[i] = str[i]+32;
    }
    printf("string in lowercase : %s", str);
}

int main()
{
    char str[100];
    printf("Enter the string: ");
    fgets(str, 100, stdin);
    
    toLowerCase(str);
    
    return 0;
    
}
