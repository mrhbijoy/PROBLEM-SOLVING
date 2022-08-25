//Write a program to print all odd numbers from 1 to n using for loop, while loop and do-while loop.
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        if(i%2!=0)
        {
            printf("%d\n",i);
        }
    }
    int i=1;
    while(i<=n)
    {
        if(i%2!=0)
        {
            printf("%d\n",i);
        }
        i++;
    }
    i=1;
    do
    {
        if(i%2!=0)
        {
            printf("%d\n",i);
        }
        i++;
    }while(i<=n);
    return 0;
}