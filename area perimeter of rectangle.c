#include<stdio.h>

int main() {
float length, breadth, area, perimeter;

printf("length: ");
scanf("%f", &length);

printf("breadth: ");
scanf("%f", &breadth);

area=length*breadth;
perimeter=2*(length+breadth);

printf("area: %.2f\n", area);
printf("perimeter: %.2f\n", perimeter);
}
