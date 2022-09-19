#include<stdio.h>
int main(){
    int number;
    float workedHour,perHoursMoney;
    printf("Enter your Id number: ");
    scanf("%d",&number);
    printf("Enter your worked hour : ");
    scanf("%f",&workedHour);
    printf("Enter your selary per hours : ");
    scanf("%f",&perHoursMoney);
    perHoursMoney = workedHour * perHoursMoney;
    printf("Id \t : %d\nHours \t : %.0f \nSelary \t : %.2f", number,workedHour,perHoursMoney);

    return 0;
}