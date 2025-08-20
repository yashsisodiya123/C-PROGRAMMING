#include<stdio.h>

int main() {
float grams, kgs;

printf("enter kgs:");
scanf("%f", &kgs);

grams=kgs*1000;

printf("grams: %.2f\n", grams);
}
