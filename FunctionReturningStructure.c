 #include <stdio.h>   //header file

struct a          //Selecting struct data type and struct variable declarartion
{
   int i;        //inside struct variable a int data type is choosen and i variable declarartion
};

struct a f(struct a x)   //structure of a function
{
   struct a r = x;      //now value of x are getting in variable x
   return r;         //Return value
}

int main(void)   //function of the main body
{
   struct a x = { 12 }; //logic
   struct a y = f(x);
   printf("%d\n", y.i);
   return 0;
}

