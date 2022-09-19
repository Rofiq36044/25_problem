#include<stdio.h>
int main(){
    int numberOne,numberTwo;
    printf("Enter two number between space : ");
    scanf("%d %d", &numberOne, &numberTwo);
    for (int i = numberOne  + 1; i < numberTwo; i++)
    {
        if ((i % 5)== 2 || (i % 5)== 3)
        {
            printf("Result : %d\n", i);
        }
        
    }
    return 0;
    
}