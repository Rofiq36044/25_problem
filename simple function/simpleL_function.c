#include<stdio.h>
int function(int a , int b ){
    return a + b;
};
int main(){
    int  b = function(20, 30);
    printf("Result : %d",b); 
}