 #include <stdio.h>    //Header file

int main()            //function of the mai body
{
    int a;           //selecting data type and variable declaration
    a = 10;          
    int *p = &a;     //declaring and initializing the pointer

    //prints the value of 'a'
    printf("%d\n", *p);  
    printf("%d\n", *&a);  
    //prints the address of 'a'
    printf("%u\n", &a);    
    printf("%u\n", p);     
    
    printf("%u\n", &p);    //prints address of 'p'
    
    return 0;
}