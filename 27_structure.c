/*#include<stdio.h>
int main()
{
    
     struct student
{
     char name[20];
     int  marks[5];
     float Totalmarks;
     float Eng,Phy,Math,Ed,Cp;



};
struct student e1;
int  i;
printf("Enter the name of the student\n");
scanf("%s",e1.name);
printf("Name of student is %s\n",e1.name);


printf("Enter the marks of student in English\n");
scanf("%f",&e1.marks);
printf("%f\n",e1.marks);
printf("Enter the marks of student in Physics\n");
scanf("%f",&e1.marks);

printf("Enter the marks of student in Maths\n");
scanf("%f",&e1.marks);

printf("Enter the marks of student in Ed\n");
scanf("%f",&e1.marks);

printf("Enter the marks of student in Cp\n");
scanf("%f",&e1.marks);

printf("%f\n",e1.marks);












}*/
#include<stdio.h>

int main()
{

    struct student
    {
         float p, c, m, e, h, total, average, percentage; 

      // p, c, m, e, and h are the five subjects
     // p = physics
     // c = chemistry
    // m = math
    // e = english
    // h = history

    } e1;
    
 

    printf("Enter the marks of five subjects::\n");
    scanf("%f%f%f%f%f", &e1.p, &e1.c, &e1.m, &e1.e, &e1.h);

    // Calculate total, average and percentage
    e1.total = e1.p + e1.c + e1.m + e1.e +e1. h;
    e1.average = e1.total / 5.0;
   e1. percentage = (e1.total / 500.0) * 100;

    // Output
    printf("The Total marks   = %.2f/500.00\n", e1.total);
    printf("The Average marks = %.2f\n", e1.average);
    printf("The Percentage    = %.2f%%", e1.percentage);

    return 0;
}

