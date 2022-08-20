/*Write a function to compare two strings*/

#include <stdio.h>

void compareStr(char str1[], char str2[])
{
    int i, j, flag=0;
    for(i=0; str1[i]; i++);//lenght of str1
    for(j=0; str2[j]; j++);//length of str2
    if(i!=j)//checking based on both string length.
    {
        printf("Both strings are not same. Based on length\n");
        return;
    }
    while(i>0)//if string length are same then checking based on ASCI value
    {
        if(str1[i] == str2[i])
            i--;
        else
            flag=1;
    }
    if(flag==0)
        printf("Both strings are same\n");
    else
        printf("Both strings are not same\n");
}

int main() 
{
    char str1[50], str2[50];
    printf("Enter string1: ");
    fgets(str1, 50, stdin);
    
    printf("Enter string2: ");
    fgets(str2, 50, stdin);
    
    compareStr(str1, str2);

    return 0;
}
