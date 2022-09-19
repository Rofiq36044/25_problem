#include<stdio.h>
int main(){
    float  a,b,c,averag;
    printf("Enter number one: ");
    scanf("%f",&a);
    printf("Enter number two: ");
    scanf("%f",&b);
    printf("Enter number three: ");
    scanf("%f",&c);
    averag = (a+b+c)/3;
    printf("Averag : %.1f",averag);
    return 0;

}