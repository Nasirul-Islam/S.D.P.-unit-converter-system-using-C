#include <stdio.h>

int main()
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
root:
repeatTemp:
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
    printf("Taka: %.2lf\n", convertDollartoTaka);
  }
  else if (currencyChoice == 2)
  {
    printf("Please Enter The Taka Amount: ");
    scanf("%lf", &userInputTaka);
    convertTakatoDollar = userInputTaka / 101.21;
    printf("Dollar: %.2lf\n", convertTakatoDollar);
  }
  else if (currencyChoice == 3)
  {
    printf("Please Enter The Dollar Amount: ");
    scanf("%lf", &userInputDollar);
    convertDollartoEuro = userInputDollar * 1.01;
    printf("Euro: %.2lf\n", convertDollartoEuro);
  }
  else if (currencyChoice == 4)
  {
    printf("Please Enter The Euro Amount: ");
    scanf("%lf", &userInputEuro);
    convertEurotoDollar = userInputEuro / 1.01;
    printf("Dollar: %.2lf\n", convertEurotoDollar);
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
}