// To find the if the year is leap year or not.
#include<stdio.h>
void main()
{
    int year;
    printf("Enter the year: ");
    scanf("%d", &year);
    if ((year%4==0) && (year%100!=0) || (year%400==0))
        printf("%d is leap year", year);
    else
        printf("%d is NOT a leap year", year);
}