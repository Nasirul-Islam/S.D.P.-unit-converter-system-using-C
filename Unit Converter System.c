// Unit Converter System Created By "Nasirul Islam".
// Student of "Bangladesh University of Business and Technology".
// Department of "Computer Science and Engineering".
#include <stdio.h>

int main()
{
  char category;
  printf("\t\"Bangladesh University of Business and Technology\"\n\n");
  printf("\t\t\"Welcome to Unit Converter System\"\n\n");
  printf("\t\t   Created By \"Anonymous_Coders\"\n\n");
  printf("\tSelect what you want to convert: \n");
root:
  printf("\n");
  printf("\t\t1. Enter 'T' for Temperature Conversion\n");
  printf("\t\t2. Enter 'C' for Currency Conversion\n");
  printf("\t\t3. Enter 'M' for Mass Conversion\n");
  printf("\t\t3. Enter 'N' for Number Conversion\n");
  printf("\t\t3. Enter 'L' for Length Conversion\n");
  printf("\t\t3. Enter '0' for Exit.\n\n");
  printf("\tPlease Enter a Character: ");
  scanf(" %c", &category);

  if (category == 'T')
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
  repeatTemp:
    printf("\n");
    printf("\t\t\"Welcome to Temperature Converter System\"\n\n");
    printf("\tSelect what you want to convert: \n\n");
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
      printf("\n\n\tYour Choice Is Not Valid!\n\n");
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
  }
  else if (category == 'C')
  {
    // Currency Conversion Variables Are Here;
    int currencyChoice;         // User choice an option;
    double userInputDollar;     // User inputted for Dollar;
    double userInputTaka;       // User inputted for Taka;
    double userInputEuro;       // User inputted for Euro;
    double convertDollartoTaka; // stores the converted Dollar->Taka;
    double convertTakatoDollar; // stores the converted Taka->Dollar;
    double convertDollartoEuro; // stores the converted Dollar->Euro;
    double convertEurotoDollar; // stores the converted Euro->Dollar;
    char again;
  repeatCurrency:
    printf("\n");
    printf("\t\t\"Welcome to Mass Converter System\"\n\n");
    printf("\tSelect what you want to convert: \n\n");
    printf("\t* Enter 1 for Dollar to Taka. \n");
    printf("\t* Enter 2 for Taka to Dollar.\n");
    printf("\t* Enter 3 for Dollar to Euro.\n");
    printf("\t* Enter 4 for Euro to Dollar.\n");
    printf("\tPlease Enter a Number: ");
    scanf("%d", &currencyChoice);

    if (currencyChoice == 1)
    {
      printf("Please Enter The Dollar Amount: ");
      scanf("%lf", &userInputDollar);
      convertDollartoTaka = userInputDollar * 101.21;
      printf("\tTaka: %.2lf\n", convertDollartoTaka);
    }
    else if (currencyChoice == 2)
    {
      printf("Please Enter The Taka Amount: ");
      scanf("%lf", &userInputTaka);
      convertTakatoDollar = userInputTaka / 101.21;
      printf("\tDollar: %.2lf\n", convertTakatoDollar);
    }
    else if (currencyChoice == 3)
    {
      printf("Please Enter The Dollar Amount: ");
      scanf("%lf", &userInputDollar);
      convertDollartoEuro = userInputDollar * 1.01;
      printf("\tEuro: %.2lf\n", convertDollartoEuro);
    }
    else if (currencyChoice == 4)
    {
      printf("Please Enter The Euro Amount: ");
      scanf("%lf", &userInputEuro);
      convertEurotoDollar = userInputEuro / 1.01;
      printf("\tDollar: %.2lf\n", convertEurotoDollar);
    }
    else
    {
      printf("\n\n\tYour Choice Is Not Valid!\n\n");
    }
    printf("Would You Like To Try Again y/n: ");
    scanf(" %c", &again);
    if (again == 'y')
    {
      goto repeatCurrency;
    }
    else
    {
      goto root;
    }
  }
  else if (category == 'M')
  {
    // Mass Conversion Variables Are Here;
    int massChoice;            // User choice an option;
    double userinputGram;      // User inputted for Gram;
    double userinputKilograms; // User inputted for Kilograms;
    double userinputPounds;    // User inputted for Pounds;
    double gramstoKilograms;   // stores the converted grams->Kilograms;
    double kilogramstoGrams;   // stores the converted kilograms->Grams;
    double gramsToPounds;      // stores the vonerted grams->Pounds;
    double poundstoGrams;      // stores the vonerted pounds->Grams;
    char again;
    // Mass Conversion Codes;
  repeatMass:
    printf("\n");
    printf("\t\t\"Welcome to Mass Converter System\"\n\n");
    printf("\tSelect what you want to convert: \n\n");
    printf("\t* Enter 1 for Grams to Kilograms. \n");
    printf("\t* Enter 2 for Gram to Pounds.\n");
    printf("\t* Enter 3 for Kilograms to Grams.\n");
    printf("\t* Enter 4 for Pounds to Grams.\n");
    printf("\tPlease Enter a Number: ");
    scanf("%d", &massChoice);

    if (massChoice == 1)
    {
      printf("Please Enter The Grams Amount: ");
      scanf("%lf", &userinputGram);
      gramstoKilograms = userinputGram / 1000.0;
      printf("\tKilograms: %.2lf\n", gramstoKilograms);
    }
    else if (massChoice == 2)
    {
      printf("Please Enter The Grams Amount: ");
      scanf("%lf", &userinputGram);
      gramsToPounds = userinputGram / 453.592;
      printf("\tPounds: %.2lf\n", gramsToPounds);
    }
    else if (massChoice == 3)
    {
      printf("Please Enter The kilograms Amount: ");
      scanf("%lf", &userinputKilograms);
      kilogramstoGrams = userinputKilograms * 1000.0;
      printf("\tGrams: %.2lf\n", kilogramstoGrams);
    }
    else if (massChoice == 4)
    {
      printf("Please Enter The Pounds Amount: ");
      scanf("%lf", &userinputPounds);
      poundstoGrams = userinputPounds * 453.592;
      printf("\tGrams: %.2lf\n", poundstoGrams);
    }
    else
    {
      printf("\n\n\tYour Choice Is Not Valid!\n\n");
    }
    printf("Would You Like To Try Again y/n: ");
    scanf(" %c", &again);
    if (again == 'y')
    {
      goto repeatMass;
    }
    else
    {
      goto root;
    }
  }
  else if (category == '0')
  {
    return 0;
  }
  else
  {
    printf("\n\n\tYour Choice Is Not Valid!\n\n");
    goto root;
  }
  return 0;
}
