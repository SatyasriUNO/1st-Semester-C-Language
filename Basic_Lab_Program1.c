//To add two numbers.
#include<stdio.h>
int main()
{
    int n1, n2, sum=0;
    printf("Enter two numbers: ");
    scanf("%d %d", &n1, &n2);
    sum= n1 + n2;
    printf("Sum: %d\n", sum);
    return 0;
}