// Length Conversion
#include <stdio.h>

/*
void MileToYard()
{
    double Mile, Yard;
    printf("Enter Mile: ");
    scanf("%lf", &Mile);
    printf("%lf\n", Mile);
    Yard = Mile * 1760;
    printf("%.2lf\n", Yard);
}
void YardToMile()
{
    double Mile, Yard;
    printf("Enter Yard: ");
    scanf("%lf", &Yard);
    printf("%lf\n", Yard);
    Mile = Yard / 1760;
    printf("%.2lf\n", Mile);
}
void centimeterToKm()
{
    double cm, km;
    printf("Enter length in centimeter: ");
    scanf("%lf", &cm);
    km = cm / 100000.0;
    printf("Kilometer = %.2lf km \n", km);
}
void centimeterToMeter()
{
    double cm, meter;
    printf("Enter length in centimeter: ");
    scanf("%lf", &cm);
    meter = cm / 100.0;
    printf("Meter = %.2lf m \n", meter);
}
*/

int main()
{
    int select;
top:
    printf("Enter 1 for Mile To Yard\n");
    printf("Enter 2 for Yard To Mile\n");
    printf("Enter 3 for centimeter To Kilometer\n");
    printf("Enter 4 for centimeter To Meter\n");
    printf("Enter 0 for Exit.\n");
    printf("Enter your choice: ");
    scanf("%d", &select);
    if (select == 1)
    {
        double Mile, Yard;
        printf("Enter Mile: ");
        scanf("%lf", &Mile);
        printf("%lf\n", Mile);
        Yard = Mile * 1760;
        printf("%.2lf\n", Yard);
    }
    else if (select == 2)
    {
        double Mile, Yard;
        printf("Enter Yard: ");
        scanf("%lf", &Yard);
        printf("%lf\n", Yard);
        Mile = Yard / 1760;
        printf("%.2lf\n", Mile);
    }
    else if (select == 3)
    {
        double cm, km;
        printf("Enter length in centimeter: ");
        scanf("%lf", &cm);
        km = cm / 100000.0;
        printf("Kilometer = %.2lf km \n", km);
    }
    else if (select == 4)
    {
        double cm, meter;
        printf("Enter length in centimeter: ");
        scanf("%lf", &cm);
        meter = cm / 100.0;
        printf("Meter = %.2lf m \n", meter);
    }
    else
    {
        return 0;
    }
    goto top;
}
