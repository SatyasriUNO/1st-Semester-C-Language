//To swap two numbers without using temporary variable.
#include<stdio.h>
void main()
{
    int N1, N2, temp;
    printf("Enter the first number: ");
    scanf("%d", &N1);
    printf("Enter the second number: ");
    scanf("%d", &N2);
    printf("Numbers before swapping: A=%d & B=%d", N1, N2);
    N1=N1+N2;
    N2=N1-N2;
    N1=N1-N2;
    printf("\nNumbers after swapping: A=%d & B=%d", N1, N2);
}