#include<stdio.h>

int main() {
float Rs, dollars, pounds;

printf("enter dollars: ");
scanf("%f", &dollars);

Rs=dollars*48;
pounds=Rs/70;


printf("pounds: %.2f\n", pounds);
}
