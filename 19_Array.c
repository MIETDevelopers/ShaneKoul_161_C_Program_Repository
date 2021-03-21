 #include<stdio.h>       //Pre processed predefined input output output Header file
int main()
{
     int a[3][4],i,j;   //Selecting data type and variable declaration
     printf("Enter Elements for Matrix of Size 3*4:\n\n"); //printf function used so that user can enter the values for matrix   
     /* Reading the elements in 3*4 dimensional array */
     for(i=0;i<=2;i++) // i is used for rows
          for(j=0;j<=3;j++) // j is used for columns
          {
               scanf("%d",&a[i][j]); //scanf function used so that user can enter value
          }
     /* Printing the 3*4 dimensional array */
     printf("\nTwo Dimensional Array: \n\n");
     for(i=0;i<=2;i++)
     {
          for(j=0;j<=3;j++)
          {
               printf("%3d ",a[i][j]);
               /*Here, %3d takes 3 digit space for each digit while printing  output */
          }
          printf("\n");
     }
     return 0;
}
