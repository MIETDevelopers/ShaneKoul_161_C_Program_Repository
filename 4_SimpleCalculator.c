#include<stdio.h>    												//Header file for input and output function

int main()															//int main is a function in which our whole code is writened and executed
{
	int a,b,sum,minus,mult,Divide;									//Selecting data type and variable declaration

	printf("Enter the first number= ");								//printf function used  for displaying output 

	scanf("%d",&a);													//scanf function is used for taking input from user

	printf("Enter the second number= ");							//printf function used  for displaying output 
													
	scanf("%d",&b);									   	        	//scanf function is used for taking input from user

	sum=a+b;														//logic 

	minus= a-b;

	mult= a*b;

	Divide= a/b;


	printf("Answer is = %d , %d, %d, %d", sum,minus,mult,Divide);  //finally we have used logic now we have to display output of the program for which there are four %d and after that a comma is given and then variables names has been written wthat means which value is assigned to which variable

	return 0;														//return value
} 