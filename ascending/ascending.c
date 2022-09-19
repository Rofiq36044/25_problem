#include<stdio.h>
int main(){
    // Initialize array
    int array[]={2,8,6,4,1,9,5,7};
    int temp = 0;
    // Calculat length of array
    int length = sizeof(array)/sizeof(array[0]);
    //display  oraginal array 
    printf("Orginal : ");
    for (int i = 0; i < length; i++)
    {
        printf("%d ",array[i]);
    }
    // ascending order the array
    for (int i = 0; i < length; i++)
    {
        for (int j = i + 1 ; j < length; j++)
        {
            if (array[i] > array[j])
            {
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;

            }
            
        }
        
    }
    printf("\n");
    printf("Ascending : ");
    //display the ascending array
    for (int i = 0; i < length; i++)
    {
        printf("%d ",array[i]);
    }    
    
    return 0;
}