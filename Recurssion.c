
#include<stdio.h>  //Header file  
int main()        //int main is a function in which out whole is writtened and executed
{    
	int n1=0,n2=1,n3,i,number;     //Selecting data type and variable declaration
	printf("Enter the number of elements: ");   //printf function calling 
	scanf("%d",&number);    
	printf(" %d %d",n1,n2);          //Printing 0 and 1.   
	for(i=2;i<number;++i)           //Loop starts from 2 because 0 and 1 are already printed.   
		{	                      //This will give output.
			n3=n1+n2;    
  			printf(" %d",n3);    
  			n1=n2;    
  			n2=n3;    
 		}  
	return 0;  
} 