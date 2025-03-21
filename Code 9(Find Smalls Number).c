#include<stdio.h>
int main(){
    int x, y, z;

    printf("Enter the number- ");
    scanf("%d %d %d", &x,&y,&z);
    if (x < y & x < z) {
    printf("The smallest number is: %d\n", x);
    } else if (y < x & y < z) {
    printf("The smallest number is: %d\n", y);
    } 
    else {
    printf("The smallest number is: %d\n", z);
    }
    return 0;
}
