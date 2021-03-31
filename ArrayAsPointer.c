#include<stdio.h>    //Header file
  
int main()          //function of the main body
{
  int arr[5] = { 1, 2, 3, 4, 5 };  //selecting data type and array varaible declaration
  int *ptr = arr;                 //pointer variable declaration
  
  printf("%p\n", ptr);           //printf functio calling
  return 0;                      //Return value
}