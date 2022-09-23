#include<stdio.h>
int main()
{
    for(int i=1;i<4;i++){
        int k=1;
        for(int j=1; j<=i;j++)
            printf("%d",k);
        k+=2;
    }
    printf("\n");
}
