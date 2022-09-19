#include<stdio.h>
int main(){
    char name[10];
    float salary,sale,wbonus;
    printf("Enter you'r name : ");
    scanf("%s",&name);
    printf("Enter your fix salary : ");
    scanf("%f",&salary);
    printf("Enter your month sale : ");
    scanf("%f",&sale);

    float bonus = (sale*0.15);
    wbonus = salary + bonus;
    
    printf("Name : %s\nFix salary : %.2f\nWith bonus : %.2f",name,salary,wbonus);

    return 0;
}