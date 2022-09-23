//Write a program in C to display the cube of the number upto given an integer
#include<stdio.h>
int main()
{
    int n,i,cube=1;
    printf("Enter the number: ");
    scanf("%d",&n);
    i=1;
    while(i<=n)
    {
        cube=cube*i;
        i++;
    }
    printf("The cube of %d is %d",n,cube);
    return 0;
}