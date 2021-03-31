 #include <stdio.h>   //Pre processed predefined header file for input and output function
struct student       //Selecting stuctue data type and variable declarartion
{
    char name[50];   //char data type and array of storge 50 bytes i.e i.e, it can store 50 words
    int roll;        //selecting data type and variable declaration
    float marks;     //selecting data type and variable declaration
} s; 

int main()         //function of the main body
{
    printf("Enter information:\n");  		 //Printf function calling
    printf("Enter name: ");         		 //printf function asking the user to enter the name of student
    fgets(s.name, sizeof(s.name), stdin);    //fgets function is used to read n charaters from the main stream

    printf("Enter roll number: ");           //Printf function calling
    scanf("%d", &s.roll);                    //scanf function asking the user to enter the roll umber of student
    printf("Enter marks: ");                 //Printf function calling
    scanf("%f", &s.marks);

    printf("Displaying Information:\n");
    printf("Name: ");
    printf("%s", s.name);
    printf("Roll number: %d\n", s.roll);
    printf("Marks: %.1f\n", s.marks);

    return 0;
}