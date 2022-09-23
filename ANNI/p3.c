
#include<stdio.h>
int main()
{
    int n,i,fact=1;
    printf("Enter the number: ");
    scanf("%d",&n);
    i=1;
    while(i<=n)
    {
        fact=fact*i;
        i++;
    }
    printf("The factorial of %d is %d",n,fact);
    return 0;
}
