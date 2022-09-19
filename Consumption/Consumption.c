#include<stdio.h>
int main(){
    float traveled,fuel, average;
    printf("Enter car's total traveled : ");
    scanf("%f",&traveled);
    printf("Enter car's total fuel : ");
    scanf("%f",&fuel);
    average = traveled/fuel;
    printf("Result : %.3f", average);
    return 0; 
}