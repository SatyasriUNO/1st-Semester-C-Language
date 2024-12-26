// To check if the number is positive or negative.
#include<stdio.h>
void main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    if (num>=0)
        printf("%d is a positive number.", num);
    else
        printf("%d is a negative number.", num);
}