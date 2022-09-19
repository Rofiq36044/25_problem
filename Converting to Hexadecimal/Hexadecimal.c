#include<stdio.h>
int main(){
    int number,decimal;
    printf("Enter number for loop : ");
    scanf("%d",&number);
    for (int i = 1; i <= number; i++)
    {
        printf("Enter a number : ");
        scanf("%d",&decimal);
        printf("Result : %x\n", decimal);
    }
    
    return 0;
}