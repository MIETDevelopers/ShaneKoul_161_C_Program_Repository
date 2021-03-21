#include<stdio.h>          														//Header file                                          
int main()                 														//Function of the main body
{
      int num,i=1,c=0;														   //Selecting data type and variable declaration
      printf("/*To Check Number Prime or Not*/\n\nEnter Number : ");     	   //printf function callling
      scanf("%d",&num);														   //Scanf function calling	
      while(i<=num)															   //While loop statement
      {
            if(num%i==0)													   //Logic	
            c++;
            i++;
      }
      if(c==2)																   //if else Statement
            printf("\n%d is Prime Number",num);
      else
            printf("\n%d is Not Prime Number",num);
      return 0;
}
