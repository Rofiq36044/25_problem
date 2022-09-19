#include<stdio.h>
int main(){
    int number,count;
   
    printf("how meny time you want to run : ");
    scanf("%d",&count);
    for (int i = 1; i < count; i++)
    {
        int flag = 0;
        printf("Enter a positive number : ");
        scanf("%d",&number);
        if (number == 0 || number == 1)
        {
            flag = 1;
        }
        for (int i = 2 ; i < number / 2 ; i++)
        {
            if (number % i == 0)
            {
                flag = 1;
            }
            break;
            
        }
        if (flag == 0)
        {
            printf("%d prime \n", number);

        }
        else{
            printf("%d not prime \n",number);
        }
    }

    
    
    return 0;
}