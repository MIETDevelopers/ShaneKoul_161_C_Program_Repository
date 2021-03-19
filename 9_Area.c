#include<stdio.h>                               //Headerfile     
 int main()                                     //int main is a function in wchich our whole code is writtened and executed
{
        float   area,radius=2,perimeter, RadiusOfPerimeter=3, AreaOfSquare,side=4, PerimeterOfSquare,  SideOfSquare=5, AreaOfRectangle,LengthOfRectangle=2,WidthOfRectangle=3, PerimeterOfRectangle, LengthOfPerimeter=4,WidthOfPerimeter=5 ; //Intializing data type and varable declaration
        printf("Enter the number for area of circle=");                          //printf function for displaying outpu
        area = (3.14*radius*radius);                                             //Logic
        printf("Area of circle =%f\n",area);                                     //printf function for displaying output 


        printf("Enter the number for perimeter of circle=");                    //printf function for displaying output 
        perimeter = (2*3.14*RadiusOfPerimeter);                                 //formula for perimeter of circle
        printf("perimeter of circle =%f\n",perimeter);                          //printf function for displaying output of perimeter of circle




        printf("Enter the number for area of square=");                         //printf function for displaying output 
        AreaOfSquare = side*side;                                               //formula for area of square
        printf("Area of square =%f\n",AreaOfSquare);                            //printf function for displaying output of Area of square

        printf("Enter the number for perimeter  of square=");                   //printf function for displaying output          
        PerimeterOfSquare = 4*SideOfSquare;                                     //Logic
        printf("perimeter  of square =%f\n",PerimeterOfSquare);                 //printf function for displaying output of perimeter  of square    



        printf("Enter the length for area of Rectangle=");                     //printf function for displaying output
        printf("Enter the breadth for area of Rectangle=");                    //printf function  
        AreaOfRectangle=LengthOfRectangle*WidthOfRectangle;                    //Logic 
        printf("Area of Rectangle =%f\n",AreaOfRectangle);                     //printf function for displaying output of perimeter  of square 



        printf("Enter the length for perimeter of Rectangle=");                //printf function for displaying output  
        printf("Enter the breadth for perimeter of Rectangle=");               //printf function
        PerimeterOfRectangle=2*(LengthOfPerimeter+WidthOfPerimeter);           //Logic
        printf("Perimeter of Rectangle =%f\n",PerimeterOfRectangle);           //printf function 
