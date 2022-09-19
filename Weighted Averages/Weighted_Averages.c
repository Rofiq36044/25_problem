#include<stdio.h>
int main(){
    float valueOne,vlaueTwo,valueTree,total;
    int number;
    printf("Enter how meny time you want :");
    scanf("%d",&number);
    for (int i = 1; i <= number; i++)
    {
        printf("Enter Tree number between space : ");
        scanf("%f %f %f",&valueOne,&vlaueTwo,&valueTree);
        total = (valueOne + vlaueTwo + valueTree) / 3;
        printf("Result : %.1f\n", total);
    }
    
    return 0;
}