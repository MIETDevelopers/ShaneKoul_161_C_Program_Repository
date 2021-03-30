#include<stdio.h> //input output header file
int main()        //function of the main body
{  int arr[10],i; //selecting data type and variable declaratio
for(i=0;i<10;i++) //for loop statement
{
printf("Enter numbers which u want to store in this array;\n"); //printf function is used to display output
scanf("%d",&arr[i]);                                            //Scanf function is used to take input from user
//overall an array is made which can store 10 values that are taken by user using for loop
}
return 0;          //Return value
}