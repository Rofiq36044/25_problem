#include<stdio.h>
int main(){
    int numberOne,numberTwo;
    printf("The number must first number greater than the socond number\n");
    printf("Enter two number between space : ");
    scanf("%d %d",&numberOne,&numberTwo);
    for (int i = 1; i <= numberTwo; i++)
    {
        printf("%d ", i);
        i += 1;
        printf("%d ", i);
        i += 1;
        printf("%d ", i);
        printf("\n");

    }
    
return 0;
}