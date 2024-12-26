// To find whether the number is divisible by 2 or not.
#include<stdio.h>
void main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    if(num%2==0)
        printf("%d is divisible by 2!", num);
    else
        printf("%d is NOT divisible by 2!", num);
}