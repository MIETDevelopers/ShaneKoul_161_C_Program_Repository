#include <stdio.h>                                     //Standarad input output header file
int main()                                             //function of the main body             
 {
    int i, n, f = 0, s = 1, nextTerm;                 //Selecting data type and variable declaration
    printf("Enter the number for fibonnaci series= ");            //print function calling
    scanf("%d", &n);                                  //scanf function calling  
    printf("Fibonacci Series: ");

    for (i = 1; i <= n; ++i)                          //For loop statement
    {
        printf("%d, ", f);
        nextTerm = f + s;                             //Logic
        f = s;
        s = nextTerm;
    }

    return 0;                                       //Return value
}

