/*Write a function to calculate length of the string*/
#include <stdio.h>

int main() {
    char str[50];
    int i;
    printf("Enter the input string: ");
    fgets(str, 50, stdin);
    
    printf("Output string is: %s", str);
    
    for(i=0; str[i]; i++);
    printf("\nLength of string is : %d", i);
    

    return 0;
}
