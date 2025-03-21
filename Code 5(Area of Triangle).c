#include <stdio.h>

int main() {
    float base, height, area;

    printf("Enter the base & height of the triangle: ");
    scanf("%f %f", &base,&height);

    area = (base * height) / 2;

    printf("The area of the triangle is: %.2f", area);

    return 0;
}
