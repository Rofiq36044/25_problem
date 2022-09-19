#include<stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
    char nameOne[40],nameTwo[40],nameTree[40];
    printf("Enter group name :");
    scanf("%s",&nameOne);
    printf("Enter row name : ");
    scanf("%s",&nameTwo);
    printf("Enter animal name : ");
    scanf("%s",&nameTree);
    if (strcmp(nameOne, "vertebrado")== 0)
    {
        if (strcmp(nameTwo, "ave")== 0)
        {
            if (strcmp(nameTree, "carnivoro")== 0)
            {
                printf("aguia");
            }
            else if (strcmp(nameTree, "onivoro")== 0)
            {
                printf("pomba");
            }  
        }
        else if (strcmp(nameTwo, "mamifero")== 0)
        {
            if (strcmp(nameTree, "onivoro")== 0)
            {
                printf("homem");
            }
            else if (strcmp(nameTree, "herbivoro")== 0)
            {
                printf("vaca");
            } 
        }
        
    }
    else if(strcmp(nameOne, "invertebrado")== 0){
        if (strcmp(nameTwo, "inseto")== 0)
        {
            if (strcmp(nameTree, "hematofago")== 0)
            {
                printf("pulga");
            }
            else if (strcmp(nameTree, "herbivoro")== 0)
            {
                printf("lagarta");
            } 
        }
        else if (strcmp(nameTwo, "anelideo")== 0)
        {
             if (strcmp(nameTree, "hematofago")== 0)
            {
                printf("sanguesuga");
            }
            else if (strcmp(nameTree, "onivoro")== 0)
            {
                printf("minhoca");
            }  
        }
    }
    
    
    return 0;
}