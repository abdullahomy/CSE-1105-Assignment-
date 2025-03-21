#include <stdio.h>
#include <math.h>
int main()
{
    float num;
    printf("Enter a number: ");
    scanf("%f", &num);
    printf("Square: %.2f", num * num);
    printf("Square Root: %.2f", sqrt(num));
    return 0;
}
