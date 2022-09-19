#include<stdio.h>
int main()
{ int value, years,months,days;
printf("Enter days : ");
scanf("%d",&value);
years = value / 365;
months = (value - (years * 365))/30;
days = (value - (years * 365)- (months * 30));

printf("Resule :  %d/ %d/ %d",years,months,days);
return (0);
}