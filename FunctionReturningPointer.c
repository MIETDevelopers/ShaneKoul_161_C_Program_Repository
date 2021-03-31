 #include<stdio.h>           //Header file 
int *return_pointer(int *, int); // this function returns a pointer of type int

int main()         //Function of the main body
{
    int i, *ptr;  //Selecting data type and pointervariable declaration
    int arr[] = {11, 22, 33, 44, 55};  //Selecting data type  and array variable declaration
    i = 4;

    printf("Address of arr = %u\n", arr); //printf function calling

    ptr = return_pointer(arr, i);     //logic

    printf("\nAfter incrementing arr by 4 \n\n");

    printf("Address of ptr = %u\n\n" , ptr);
    printf("Value at %u is %d\n", ptr, *ptr);

    // signal to operating system program ran fine
    return 0;   //return value
}

int *return_pointer(int *p, int n)
{
    p = p + n;
    return p;
}
