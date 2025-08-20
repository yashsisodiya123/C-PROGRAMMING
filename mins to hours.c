#include<stdio.h>

int main() {
float hours, minutes;

printf("enter minutes: ");
scanf("%f", &minutes);

hours=minutes/60;

printf("hours: %.2f\n", hours);
}
