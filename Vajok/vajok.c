#include<stdio.h>
int main(){
    int count,i,number,roling;
    printf("How many time you want :");
    scanf("%d",&count);
    for (i = 0; i < count; i++)
    {
        printf("which number you want to see:");
        scanf("%d",&number);
        printf("Case %d :", i);
        for ( roling = 1; roling <= number; roling++)
        {
            if (number%roling==0)
            {
                printf(" %d", roling);
            }
            
        }
        printf("\n");
        
    }
    return 0;
    
}