//To find simple interest.
#include<stdio.h>
void main()
{
    int P, R, T, SI;
    printf("Enter the Principle Amount: ");
    scanf("%d", &P);
    printf("Enter the Rate of Interest: ");
    scanf("%d", &R);
    printf("Enter the Tenure: ");
    scanf("%d", &T);
    SI=(P*R*T)/100;
    printf("The Simple Interest is %d", SI);
}