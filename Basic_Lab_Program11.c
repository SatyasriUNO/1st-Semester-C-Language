// To find largest of 3 numbers
#include<stdio.h>
void main()
{
    int N1, N2, N3;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &N1, &N2, &N3);
    if ((N1>N2) && (N1>N3))
        if (N2>N3)
            printf("%d is the greatest.\n%d is the second largest.\n%d is the smallest.", N1, N2, N3);
        else
            printf("%d is the greatest.\n%d is the second largest.\n%d is the smallest.", N1, N3, N2);
    else if ((N2>N3) && (N2>N1))
        if (N1>N3)
            printf("%d is the greatest.\n%d is the second largest.\n%d is the smallest.", N2, N1, N3);
        else
            printf("%d is the greatest.\n%d is the second largest.\n%d is the smallest.", N2, N3, N1);
    else
        if (N1>N2)
            printf("%d is the greatest.\n%d is the second largest.\n%d is the smallest.", N3, N1, N2);
        else
            printf("%d is the greatest.\n%d is the second largest.\n%d is the smallest.", N3, N2, N1);
    printf("\nThank you for using our program!!!");
}