#include<stdio.h>                                                                        //input output Header file
#include<math.h>                                                                        //math library for math functions        
int main()                                                                              //main function body
{
float x1, y1, x2, y2, distance;                                                         //Declaring data type and variable declration
printf("Enter  values for point 1 (x1, y1)\n");                                        //printf function for displaying output
scanf("%f%f", &x1, &y1);                                                               //scanf function for taking output from user
printf("Enter  values point 2 (x2, y2)\n");                                           // Again printf function calling
scanf("%f%f",&x2,&y2);                                                                //Again taking input from user
distance= sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));                                      //Distance formula 
printf("Distance between two points= %f\n",x1, y1, x2, y2, distance);                //printf function used for displaying final output of the program 
return 0;                                                                           //Return value
}
