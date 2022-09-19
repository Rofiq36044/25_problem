#include<stdio.h>
int main(){
	int value;
	printf("Enter a number : ");
	scanf("%d",&value);
	for (int i = 2; i <= value; i++)
	{
		if (i % 2 == 0)
		{
			printf("%d ^ 2 : %d \n",i, i*i);

		}
		
	}
	return 0;
	
}