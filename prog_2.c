/*Write a function to reverse a string.*/
#include <stdio.h>

void reverseString(char str[])
{
    int i;
    for(i=0; str[i]; i++);
    while(i>0)
    {
        printf("%c", str[i-1]);
        i--;
    }
}

int main() {
    char str[50];
    printf("Enter the string: ");
    fgets(str, 50, stdin);
    
    printf("Reversed string is:");
    reverseString(str);

    return 0;
}
