#include<stdio.h>
int main(){
float gross_salary,allowances,deductions, net_salary;
printf("gross_salary: ");
scanf("%f", &gross_salary);

    if(gross_salary>10000){
            allowances=gross_salary*0.1;
            deductions=gross_salary*0.03;
    }
        else {
                if(gross_salary>5000){
                allowances=gross_salary*0.7;
                deductions=gross_salary*0.2;
        }
            else {
                allowances=0;
                deductions=0;
            }}
    net_salary=gross_salary+allowances-deductions;
        printf("net_salary: %.2f\n ", net_salary);
}
