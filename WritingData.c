 #include<stdio.h> //Header file  for input and output 
 #include<stdlib.h> //for exit  fuction i have used this library here
 #include<string.h> //so that  a group of charaters can be printed using this library
 int main()        //function of the main body
 {
     FILE *fp;  //This is the format for opening file
     char s[80]; //selected data type and variable array is declared caple of storing 80 character calues
     fp = fopen("D:\\a.txt","w"); //By this fopen we are able to open file in our program
     if(fp==NULL)         //if statement here is used so that in case file is unable to open then it would show this
     {
         puts("Cannot open the file");
         exit(1);
     }
     printf("\nEnter a few lines of text:\n");  //printf function used asking for writting whatever u like also to come out u have to press enter at the beggining of the line
     while(strlen (gets(s) )>0)        //While loop statement and strelen is used to calculate the length of the string and if length is greater then 0 then it will continue,the moment u press enter at  the beggining length <0
     {
         fputs(s,fp);
         fputs("\n",fp);
     }
     fclose(fp);   //file will get close 
     return 0;   //return value
 }
