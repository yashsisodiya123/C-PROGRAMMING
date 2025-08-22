#include<stdio.h>
int main(){
float net_sales, gross_sales, discount;
printf("gross_sales: ");
scanf("%f", &gross_sales);

    if(gross_sales>20000)
            discount=gross_sales*0.15;

    else{
                if(gross_sales>10000)
                discount=gross_sales*0.1;

                else
                discount=gross_sales*0.05;
    }

    net_sales=gross_sales-discount;

        printf("net_sales: %.2f\n ", net_sales);
}
