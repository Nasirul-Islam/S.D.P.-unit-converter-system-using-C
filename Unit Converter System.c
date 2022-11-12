// Unit Converter System Developed By "Nasirul Islam".
// Student of "Bangladesh University of Business and Technology".
// Department of "Computer Science and Engineering".
#include <stdio.h>

void TemperatureConversion()
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
}

void CurrencyConversion()
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

  printf("\n");
  printf("\t\t\"Welcome to Currency Converter System\"\n\n");
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
}

void MassConversion()
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
  // Mass Conversion Codes;
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
}

void NumberConversion()
{
  int numberChoice;
  printf("\n");
  printf("\t* Enter 1 for Decimal To Binary. \n");
  printf("\t* Enter 2 for Decimal To Octal. \n");
  printf("\t* Enter 3 for Decimal To Hexadecimal. \n");
  printf("\n\tPlease Enter a Number: ");
  scanf("%d", &numberChoice);
  if (numberChoice == 1)
  {
    int number, cnt, i;
    int bin[32];
    printf("\n\tEnter decimal number: ");
    scanf("%d", &number);
    cnt = 0; /*initialize index to zero*/
    while (number > 0)
    {
      bin[cnt] = number % 2;
      number = number / 2;
      cnt++;
    }
    /*print value in reverse order*/
    printf("\n\tBinary value is: ");
    for (i = (cnt - 1); i >= 0; i--)
      printf("%d", bin[i]);
    printf("\n\n");
  }

  else if (numberChoice == 2)
  {
    int number, cnt, i;
    int oct[32];

    printf("\n\tEnter decimal number: ");
    scanf("%d", &number);

    cnt = 0; /*initialize index to zero*/
    while (number > 0)
    {
      oct[cnt] = number % 8;
      number = number / 8;
      cnt++;
    }

    /*print value in reverse order*/
    printf("\n\tOctal value is: ");
    for (i = (cnt - 1); i >= 0; i--)
      printf("%d", oct[i]);
    printf("\n\n");
  }

  else if (numberChoice == 3)
  {
    int number, cnt, i;
    char hex[32]; /*bcoz it contains characters A to F*/

    printf("\n\tEnter decimal number: ");
    scanf("%d", &number);

    cnt = 0; /*initialize index to zero*/
    while (number > 0)
    {
      switch (number % 16)
      {
      case 10:
        hex[cnt] = 'A';
        break;
      case 11:
        hex[cnt] = 'B';
        break;
      case 12:
        hex[cnt] = 'C';
        break;
      case 13:
        hex[cnt] = 'D';
        break;
      case 14:
        hex[cnt] = 'E';
        break;
      case 15:
        hex[cnt] = 'F';
        break;
      default:
        hex[cnt] = (number % 16) + 0x30; /*converted into char value*/
      }
      number = number / 16;
      cnt++;
    }
    /*print value in reverse order*/
    printf("\n\tHexadecimal value is: ");
    for (i = (cnt - 1); i >= 0; i--)
      printf("%c", hex[i]);
    printf("\n\n");
  }
}

void LengthConversion()
{
  int select;
  printf("\n\t* Enter 1 for Mile To Yard\n");
  printf("\t* Enter 2 for Yard To Mile\n");
  printf("\t* Enter 3 for centimeter To Kilometer\n");
  printf("\t* Enter 4 for centimeter To Meter\n");
  printf("\t* Enter 0 for Exit.\n");
  printf("\n\tEnter your choice: ");
  scanf("%d", &select);
  if (select == 1)
  {
    double Mile, Yard;
    printf("\n\tEnter length in Mile: ");
    scanf("%lf", &Mile);
    Yard = Mile * 1760;
    printf("\n\tLength in Yard: %.2lf\n", Yard);
  }
  else if (select == 2)
  {
    double Mile, Yard;
    printf("\n\tEnter length in Yard: ");
    scanf("%lf", &Yard);
    Mile = Yard / 1760;
    printf("\n\tLength in Mile: %.2lf\n", Mile);
  }
  else if (select == 3)
  {
    double cm, km;
    printf("\n\tEnter length in centimeter: ");
    scanf("%lf", &cm);
    km = cm / 100000.0;
    printf("\n\tLength in Kilometer: %.2lf km \n", km);
  }
  else if (select == 4)
  {
    double cm, meter;
    printf("\n\tEnter length in centimeter: ");
    scanf("%lf", &cm);
    meter = cm / 100.0;
    printf("\n\tLength in Meter: %.2lf m \n", meter);
  }
  else
  {
    printf("\n\n\tYour Choice Is Not Valid!\n\n");
  }
}

// main function ------------------
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
    TemperatureConversion();
  }

  else if (category == 'C')
  {
    CurrencyConversion();
  }

  else if (category == 'M')
  {
    MassConversion();
  }

  else if (category == 'N')
  {
    NumberConversion();
  }

  else if (category == 'L')
  {
    LengthConversion();
  }

  else if (category == '0')
  {
    return 0;
  }

  else
  {
    printf("\n\n\tYour Choice Is Not Valid!\n\n");
  }

  printf("Would You Like To Try Again y/n: ");
  char again;
  scanf(" %c", &again);

  if (again == 'y')
  {
    goto root;
  }
  else
  {
    return 0;
  }
}
