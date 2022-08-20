/*Write a function to check whether a given string is palindrome or not*/

#include <stdio.h>

void isPalindrome(char str[])
{
    int i = 0, j, len, flag=1;
    for(len=0; str[len]; len++);
    j = len-2;
    
    while(i<j)
    {
        if(str[i]==str[j])
        {
            i++; 
            j--;
        }
        else
        {
            flag=0;
            break;
        }
    }
  
    if(flag==1)
        printf("given string is palindrome");
    else
        printf("given string is not palindrome");
}

int main()
{
    char str[100];
    printf("Enter the string: ");
    fgets(str, 100, stdin);
    
    isPalindrome(str);
    
    return 0;
    
}
