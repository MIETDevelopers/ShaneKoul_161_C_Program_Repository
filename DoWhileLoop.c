#include<stdio.h>   //Header file  
int main()         //function of the main body
{
	int num=1;	//initializing the variable
	do      	//do-while loop 
	{
		printf("%d\n",2*num); //printf function calling
		num++;		//incrementing operation
	}while(num<=10);
	return 0;
}