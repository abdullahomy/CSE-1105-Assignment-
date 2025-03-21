#include<stdio.h>
int main()
{
    float inch, cm;
    printf("Enter length in Inch: ");
    scanf("%f", &inch);
    cm = inch * 2.54;
    printf("Length in Centimeters = %.3f", cm);

    return 0;
}
