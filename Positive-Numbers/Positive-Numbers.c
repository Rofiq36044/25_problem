#include<stdio.h>
int main(){
    int value;
    int count = 0;
    int number;
    printf("Enter how meny time you want: ");
    scanf("%d",&value);
    for (int i = 1; i <= value; i++)
    {
        printf("Enter number :");
        scanf("%d",&number);
        if (number >= 0)
        {
            count += 1;
        }
    

    }
    printf("There is %d positive number",count);
    
    return 0;
}