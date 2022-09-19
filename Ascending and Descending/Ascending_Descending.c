#include<stdio.h>
int main(){
    int numberOne,numberTwo,again;
    
    printf("Enter run time : ");
    scanf("%d",&again);
    for (int i = 1; i <= again; i++)
    {
        printf("Enter two number between space : ");
        scanf("%d %d",&numberOne,&numberTwo);
        if (numberOne != numberTwo)
        {
            if (numberOne < numberTwo)
            {
                printf("Crescente\n");
            }
            else{
                printf("Decrescente\n");
            }
        }
    }
    
return 0;    
}