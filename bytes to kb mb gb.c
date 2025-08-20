#include<stdio.h>

int main() {
float bytes, kb, mb, gb;

printf("enter bytes:");
scanf("%f", &bytes);

kb=bytes/1024;
mb=kb/1024;
gb=mb/1024;

printf("kb: %.2f\n", kb);
printf("mb: %.2f\n", mb);
printf("gb: %.2f\n", gb);
}
