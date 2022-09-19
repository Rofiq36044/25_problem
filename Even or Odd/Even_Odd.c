#include<stdio.h>
int main(){
    int count,value;
    printf("how meny time you want to run : ");
    scanf("%d",&count);
    for (int i = 0; i < count; i++)
    {
        printf("Enter number : ");
        scanf("%d",&value);
        if (value%2 == 0)
        {
            printf("Even\n");
            
        }
        else if (value<0)
        {
            printf("Nagetive\n");
        }
        else{
            printf("Odd\n");
        }
    }
    return 0;
    
}