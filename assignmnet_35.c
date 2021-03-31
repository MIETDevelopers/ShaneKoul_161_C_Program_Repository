
#include<stdio.h>   //Header file for input and output function
#include<string.h>  //Header file for 
 
void create_marks_csv(char *filename,int a[][3],int n,int m)      //void data type and csv file declaration
{
 
printf("\n Creating %s.csv file",filename);  //printf function calling
 
FILE *fp;                                   //file name and pointer declaration
 
int i,j;                                   //selecting data type and variable declaration 
 
filename=strcat(filename,".csv");         
 
fp=fopen(filename,"w+");   //fopen is used to open file and read datab of the file
 
fprintf(fp,"Student Id, Physics, Chemistry, Maths");  //
 
for(i=0;i<m;i++)    //for loop statement
{
 
    fprintf(fp,"\n%d",i+1);
 
    for(j=0;j<n;j++)
 
        fprintf(fp,",%d ",a[i][j]);
 
    }
 
fclose(fp);
 
printf("\n %sfile created",filename);
 
}
 
int main(){
 
    int a[3][3]={{50,50,50},{60,60,60},{70,70,70}};
 
    char str[100];
 
    printf("\n Enter the filename :");
 
    gets(str);
 
create_marks_csv(str,a,3,3);
 
return 0;
}
