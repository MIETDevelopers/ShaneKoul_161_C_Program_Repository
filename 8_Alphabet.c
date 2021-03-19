#include <stdio.h>                                                                      //Header file for input and output function    
int main()                                                                              //Function of the main body
{
    char c;                                                                             //Declaring data type and variable declaration
    int lowercaseVowel, uppercaseVowel;                                                 //Declarig data type and variable declaration
    printf("Enter an alphabet= ");
    scanf("%c", &c);

    lowercaseVowel = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');      //evaluates True if variable  c is a lowercase vowel


    
    uppercaseVowel = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');     //evaluates True if variable c is a uppercase vowel   

    if (lowercaseVowel || uppercaseVowel)                                            //if else statement  
        printf("%c is a vowel.", c);
    else
        printf("%c is a consonant.", c);
    return 0;                                                                        //Return value
}

