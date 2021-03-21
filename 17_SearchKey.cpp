 #include<stdio.h>
int main()
{
    int marks[5], i,key;
    for(i=0;i<=4;i++)
    {
        printf("Enter marks==");
        scanf("%d", &marks[i]);
    }
    //for(i=0;i<=4;i++)
    printf("Enter Search key");
    scanf("%d", &key);
    for(i=0;i<=4;i++)
    {
        if(key == marks[i])
        {
        printf("Found");
        }

    }
}
