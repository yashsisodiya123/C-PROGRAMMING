#include<stdio.h>

int main() {
float grams, kgs;

printf("enter grams:");
scanf("%f", &grams);

kgs=grams/1000;

printf("kgs: %.2f\n", kgs);
}
