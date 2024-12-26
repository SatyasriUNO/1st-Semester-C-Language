// To check if a person is eligible ofr voting.
#include<stdio.h>
void main()
{
    int age;
    char name[20];
    printf("Enter your name: ");
    gets(name);
    printf("Enter your age: ");
    scanf("%d", &age);
    if (age>=18)
        printf("Person is eligible for voting.");
    else
        printf("Person is not eligible for voting.");
}