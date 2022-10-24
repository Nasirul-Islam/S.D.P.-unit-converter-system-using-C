#include <stdio.h>

int main()
{
    // Temperature Conversion Variables Are Here;
    int tempChoice;             // User choice an option;
    double userinputC;          // User inputted Celsius;
    double userinputF;          // User inputted Fahreinheit;
    double userinputK;          // User inputted Kelvin;
    double celciusToFahrenheit; // variable that stores the converted C->F;
    double fahrenheitToCelcius; // variable that stores the converted F->C;
    double celciusToKelvin;     // variable that stores the converted C->K;
    double KelvinitToCelcius;   // variable that stores the converted K->C;
    char again;
    // Temperature Conversion Codes;
root:
    printf("\t\t\"Welcome to Temperature Converter System\"\n\n");
    printf("\tSelect what you want to convert: \n\n");
repeatTemp:
    printf("\t* Enter 1 for Fahrenheit to Celsius. \n");
    printf("\t* Enter 2 for Celsius to Fahrenheit. \n");
    printf("\t* Enter 3 for Kelvin to Celsius. \n");
    printf("\t* Enter 4 for Celsius to Kelvin. \n");
    printf("\tPlease Enter a Number: ");
    scanf("%d", &tempChoice);

    if (tempChoice == 1)
    {
        printf("Please Enter The Fahrenheit Degree: ");
        scanf("%lf", &userinputF);
        fahrenheitToCelcius = ((userinputF - 32.0) * (5.0 / 9.0));
        printf("\tCelcius: %lf\n", fahrenheitToCelcius);
    }
    else if (tempChoice == 2)
    {
        printf("Please Enter The Celcius Degree: ");
        scanf("%lf", &userinputC);
        celciusToFahrenheit = ((userinputC * (9.0 / 5.0)) + 32.0);
        printf("\tFahrenheit: %lf\n", celciusToFahrenheit);
    }
    else if (tempChoice == 3)
    {
        printf("Please Enter The Kelvin Degree: ");
        scanf("%lf", &userinputK);
        KelvinitToCelcius = (userinputK - 273.15);
        printf("\tCelcius: %lf\n", KelvinitToCelcius);
    }
    else if (tempChoice == 4)
    {
        printf("Please Enter The Celcius Degree: ");
        scanf("%lf", &userinputC);
        celciusToKelvin = (userinputC + 273.15);
        printf("\tKelvin: %lf\n", celciusToKelvin);
    }
    else
    {
        printf("Your Choice Is Not Valid!\n");
    }
    printf("Would You Like To Try Again y/n: ");
    scanf(" %c", &again);
    if (again == 'y')
    {
        goto repeatTemp;
    }
    else
    {
        goto root;
    }
    return 0;
}