#include <stdio.h>
/*C program to convert number from decimal to octal*/
int decimalToOctal()
{
    int number, cnt, i;
    int oct[32];

    printf("Enter decimal number: ");
    scanf("%d", &number);

    cnt = 0; /*initialize index to zero*/
    while (number > 0)
    {
        oct[cnt] = number % 8;
        number = number / 8;
        cnt++;
    }

    /*print value in reverse order*/
    printf("Octal value is: ");
    for (i = (cnt - 1); i >= 0; i--)
        printf("%d", oct[i]);
    return 0;
}
/*C program to convert number from decimal to binary*/
int decimalToBinary()
{
    int number, cnt, i;
    int bin[32];
    printf("Enter decimal number: ");
    scanf("%d", &number);
    cnt = 0; /*initialize index to zero*/
    while (number > 0)
    {
        bin[cnt] = number % 2;
        number = number / 2;
        cnt++;
    }
    /*print value in reverse order*/
    printf("Binary value is: ");
    for (i = (cnt - 1); i >= 0; i--)
        printf("%d", bin[i]);
    return 0;
}
/*C program to convert number from decimal to hexadecimal*/
void decimalToHexadecimal()
{
    int number, cnt, i;
    char hex[32]; /*bcoz it contains characters A to F*/

    printf("Enter decimal number: ");
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
    printf("Hexadecimal value is: ");
    for (i = (cnt - 1); i >= 0; i--)
        printf("%c", hex[i]);
}

int main()
{
    int numberChoice;
top:
    printf("\n");
    printf("\t* Enter 1 for Decimal To Binary. \n");
    printf("\t* Enter 2 for Decimal To Octal. \n");
    printf("\t* Enter 3 for Decimal To Hexadecimal. \n");
    printf("\tPlease Enter a Number: ");
    scanf("%d", &numberChoice);
    if (numberChoice == 1)
    {
        decimalToBinary();
    }
    else if (numberChoice == 2)
    {
        decimalToOctal();
    }
    else if (numberChoice == 3)
    {
        decimalToHexadecimal();
    }

    goto top;

    return 0;
}
