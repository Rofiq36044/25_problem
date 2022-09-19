#include<stdio.h>
int main(){
    int value,hours,minutes,seconds;
    printf("Enter  seconds :");
    scanf("%d",&value);
    hours = value / 3600;
    minutes = (value - (hours*3600))/60;
    seconds = (value - (hours*3600)-(minutes*60));
    printf("Result >> %d:%d:%d ", hours,minutes,seconds);
    return 0;
}