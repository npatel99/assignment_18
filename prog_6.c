/*Write a function to check whether a given string is an alphanumeric string or not*/

#include <stdio.h>

void isAlphaNumeric(char str[])
{
    int countAlpha = 0, countNum = 0, i;
    for(i=0; str[i]; i++)
    {
        //to check alphabates a-z, A-Z
        if((str[i]>='A'&&str[i]<='Z')||(str[i]>='a'&&str[i]<='z'))
            countAlpha++;
            
        //to check digits 0-9
        if(str[i]>='0'&&str[i]<='9')
            countNum++;
        
        //atleast one alphabates and one number
        if(countAlpha>0 && countNum>0)
        {
            printf("Given string is alphaNumeric\n");
            return; //to avoid unnecessery execution once find atleast 1 alpha and 1 number
        }
    }
    if((!(countAlpha>0) && (countNum>0))||((countAlpha>0) && !(countNum>0))||(!(countAlpha>0) && !(countNum>0)))
    {
        printf("Given string is not alphaNumeric\n");
    }
}

int main()
{
    char str[100];
    printf("Enter the string: ");
    fgets(str, 100, stdin);
    
    isAlphaNumeric(str);
    
    return 0;
    
}
