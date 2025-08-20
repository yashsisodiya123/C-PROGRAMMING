#include<stdio.h>

int main() {
float celsius, fahrenheit;

printf("enter fahrenheit: ");
scanf("%f", &fahrenheit);

celsius=5.0/9.0*(fahrenheit-32);

printf("celsius: %.2f\n", celsius);
}
