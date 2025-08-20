#include<stdio.h>

int main() {
float side, area, perimeter;

printf("side: ");
scanf("%f", &side);

area=side*side;
perimeter=side*4;

printf("area: %.2f\n", area);
printf("perimeter: %.2f\n", perimeter);
}
