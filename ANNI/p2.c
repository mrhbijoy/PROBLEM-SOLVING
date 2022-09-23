
#include<stdio.h>
int main() {
 int n,i,sum=0;
    printf("Enter the number of natural numbers to be added: ");
    scanf("%d",&n);
    i=1;
    while(i<=n)
    {
        sum=sum+i;
        i++;
    }
    printf("The sum of first %d natural numbers is %d",n,sum);
    return 0;




}