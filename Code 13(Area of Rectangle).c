#include <stdio.h>

int main() {
    float base, height, area;
    printf("Enter the base & height of the rectangle: ");
    scanf("%f %f", &base,&height);
    area = (base * height);
    printf("The area of the rectangle is: %.2f", area);

    return 0;
}
