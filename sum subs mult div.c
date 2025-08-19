#include<stdio.h>

int main() {
int num1, num2, sum, subs, mult, div;

printf("enter the first number : ");
scanf("%d",&num1);

printf("enter the second number :");
scanf("%d",&num2);

sum=num1+num2;
subs=num1-num2;
mult=num1*num2;
div=num1/num2;

printf("this is sum: %d\n", sum);
printf("this is subtraction: %d\n", subs);
printf("this is multiplication: %d\n", mult);
printf("this is division: %d\n", div);
}
