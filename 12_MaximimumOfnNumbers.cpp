 #include<stdio.h>                              //Standarad Header file for input and output
  
int main()                                    //Function of the main body
{  
    int limit, num, big = 0;                 //Declaring Data type and varaiable initialization
  
    printf("Enter the limit\n");            //Printf function used for displaying output to the user
    scanf("%d", &limit);                   //Scanf function is used here for taking input from user
  
    printf("Enter %d numbers\n", limit);  //printf function calling
  
    scanf("%d", &num);                   //Scanf function callinng
    big = num;                          //logic
    limit = limit - 1;  
  
    while(limit > 0)                  //While loop statement
    {  
        scanf("%d", &num);  
        if(num > big)  
        {  
            big = num;  
        }  
        limit--;  
    }  
  
    printf("Biggest number is %d\n", big);  
  
    return 0;  
}  

