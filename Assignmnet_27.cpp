#include<stdio.h>   //Header file
void change_twod(int (*a)[3]);

int main()   //function of the main body
{
    int i,j, two_d[2][3] = {   
                               {99,44,11},
                               {4,66,9}
                           };

    printf("Original array: \n\n");  //printf ucntion calling

    for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 3; j++)
        {
            printf("%3d ", two_d[i][j]);
        }

        printf("\n");
    }

    change_twod(two_d);

    printf("\n\nModified array : \n\n");

    for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 3; j++)
        {
            printf("%3d ", two_d[i][j]);
        }
        printf("\n");
    }

    // signal to operating system everything works fine
    return 0;
}

void change_twod(int (*arr)[3])
{
    int i, j;

    printf("\n\nIncrementing every element by 5\n");
    // increment original elements by 6

    for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 3; j++)
        {
            arr[i][j] = arr[i][j] + 5;
        }
    }

}
