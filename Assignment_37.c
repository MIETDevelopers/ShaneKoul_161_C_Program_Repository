#include <stdio.h>//Input output standarad header file
#include<stdlib.h> //This libraray is used because we have used exit function
int main()        //function of the main body
{
	char name[50];  //selecting data type and variable declaration caple of holding 50 values
	int marks,i,n;  //selecting data type and variable declaration
	printf("Enter name  of students: ");  //printf function calling 
	scanf("%d",&n); 						//scanf function used for taking input from iser
	FILE *fptr;                            //file name and pointer variable declaration
	fptr=(fopen("C:\\student.txt","w"));  //fopen is used to open any csv file and read data inside it
	if(fptr==NULL) 
	{
		printf("Opened");
		exit(1);
	}
	for (i=0;i<n;++i)
	{
		printf("For student%d\nEnter name: ",i+1);
		scanf("%s",name);
		printf("Enter marks: ");
		scanf("%d",&marks);
		fprintf(fptr,"\nName: %s \nMarks=%d \n",name,marks);
	}
	fclose(fptr);
	return 0;
}
