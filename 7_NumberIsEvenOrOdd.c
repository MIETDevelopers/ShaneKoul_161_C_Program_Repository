#include <stdio.h>                                                                   //HEader file
int main()                                                                           //Main function body
 {
    int num;                                                                         //Selecting data type and variable declarartion
    printf("Enter an integer which u want to check is even or odd= ");               //printf function calling
    scanf("%d", &num);                                                               //scanf function calling        

    
    if(num % 2 == 0)                                                               // true if num is perfectly divisible by 2, if else statement is used
        printf("%d is even.", num);
    else                                        
        printf("%d is odd.", num);
    
    return 0;                                                                    //Return value
}

