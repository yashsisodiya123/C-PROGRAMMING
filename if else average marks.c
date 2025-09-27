#include<stdio.h>
int main(){
float total, average, sub1, sub2, sub3;

printf("sub1: ");
scanf("%f", &sub1);

printf("sub2: ");
scanf("%f", &sub2);

printf("sub3: ");
scanf("%f", &sub3);

total=sub1+sub2+sub3;
average=(sub1+sub2+sub3)/3;
printf("total marks: %f\n", total);
printf("average marks: %f\n", average);

if(sub1<35||sub2<35||sub3<35) 
    printf("student fails");
    
else{
    if(((sub1+sub2+sub3)/3)>=70)
        printf("distinction");

    else {
            if(((sub1+sub2+sub3)/3)>=60)
            printf("first class");

                else {
                      if(((sub1+sub2+sub3)/3)>=50)
                      printf("second class");

                        else{
                                if(((sub1+sub2+sub3)/3)>=35)
                                printf("third class");
    }}}}}



