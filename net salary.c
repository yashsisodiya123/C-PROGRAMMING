#include<stdio.h>

int main() {
float gross_salary, tax, pf, net_salary;

printf("gross_salary: ");
scanf("%f", &gross_salary);

printf("tax: ");
scanf("%f", &tax);

printf("pf: ");
scanf("%f", &pf);

net_salary=gross_salary-((gross_salary*tax/100)+(gross_salary*pf/100));

printf("net_salary: %.2f\n", net_salary);
}
