#include<stdio.h>

int main() {
float height, base, area;

printf("height: ");
scanf("%f", &height);

printf("base: ");
scanf("%f", &base);

area=(height*base)/2;

printf("area: %.2f\n", area);
}
