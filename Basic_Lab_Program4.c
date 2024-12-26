//To convert the temperature from Celsius to Fahrenheit and vice versa.
#include<stdio.h>]
void main()
{
    int opt, T, F, C;
    printf("Following are the options of conversion:-\n          1. Fahrenheit to Celsius\n          2. Celsius to Fahrenheit\nChoose the option of conversion: ");
    scanf("%d", &opt);
    if (opt==1)
    {
        printf("Enter the temperature (in Fahrenheit): ");
        scanf("%d", &T);
        F=(T*1.8)+32;
        printf("Temperature (in Celsius): %d", F);
    }
    else
    {
        printf("Enter the temperature (in Celsius): ");
        scanf("%d", &T);
        C=(T-32)/1.8;
        printf("Temperature (in Fahrenheit): %d", C);
    }
}