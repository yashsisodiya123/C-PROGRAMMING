#include<stdio.h>

int main() {
float interest, rate_of_interest, principal, number_of_years;

printf("principal: ");
scanf("%f", &principal);

printf("rate_of_interest: ");
scanf("%f", &rate_of_interest);

print("number_of_years: ");
scanf("%f", &number_of_years);

interest=(principal*rate_of_interest*number_of_years)/100;

printf("interest: %.2f\n", interest);
}
