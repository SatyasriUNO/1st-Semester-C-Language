// To find the greatest of two numbers.
#include<stdio.h>
void main()
{
    int N1, N2;
    printf("Enter two numbers: ");
    scanf("%d %d", &N1, &N2);
    if (N1>N2)
        printf("%d is the greatest.", N1);
    else
        printf("%d is the greatest.", N2);
}