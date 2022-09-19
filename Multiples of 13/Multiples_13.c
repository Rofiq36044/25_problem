#include<stdio.h>
int main(){
    int numberOne,numberTwo,Total = 0;
    printf("enter Two number between space : ");
    scanf("%d %d",&numberOne,&numberTwo);
    for (int i = numberOne; i < numberTwo; i++)
    {
        if ((i % 13) > 0)
        {
            Total = Total + i;
        }
    }
    printf("Result : %d", Total);
    return 0;
    
}