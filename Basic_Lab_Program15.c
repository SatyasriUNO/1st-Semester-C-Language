// To print ASCII value of a character.
#include<stdio.h>
void main()
{
    char name;
    printf("Enter your name: ");
    scanf("%c", &name);
    printf("Name entered is: %c\nASCII value of name entered is: %d", name, name);
}