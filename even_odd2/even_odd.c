#include<stdio.h>
int main(){
    char again;
    int number;
    printf("Please enter Y or N : ");
    scanf("%s",&again);
    while (again == 'Y' || again =='y')
    {
        printf("Enter a number for chack :");
        scanf("%d",&number);
        if (number % 2 == 0)
        {
            printf("Even\n");
        }
        else{
            printf("Odd\n");
        }
        

    }

    getchar();
}