// To find whether the number is even or not.
#include<stdio.h>
void main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    if(num%2==0)
        printf("%d is an even number!", num);
    else
        printf("%d is an odd number!", num);
}