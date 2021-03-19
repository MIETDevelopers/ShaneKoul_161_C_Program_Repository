#include<stdio.h>                                              //Standarad input output Header file
int main()                                                     //Function of the main body
{
     int number,count,s=1;                                    //Selecting data type and variable declaration

     printf("Enter a number whose factorial u want=");      //Printf function calling
     scanf("%d",&number);                                   //scanf function calling


     for(count=1;count<=number; count = count+1)           //For loop statement

    {

       s= s * count ;                                      //logic 

    }

printf("Factorial of  %d is %d\n",number,s);              //Printf function calling for final output of the program

return 0;                                                   //Return value




}
