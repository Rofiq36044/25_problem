#include<stdio.h>
int main(){
    int number1, total;
    printf("Enter number one : ");
    scanf("%d",&number1);
    total = number1 % 2;
    if (number1 == 0)
    {
        printf("%d Even", number1);
    }
    else{
        printf("%d Odd", number1);
    }
    getchar();
}