//take input from user a integer as string print , after last three digits then every 2 digits 

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>
#include <math.h>
int main() {
    char test[100];
    char str[100];
   
    printf("Enter a string: ");
    scanf("%s", str);

    for (int i = strlen(str) + 1; i >= 0; i--)
    {
        if (i % 3 == 0 && i != 0)
        {
            printf(",");
        }
        printf("%c", str[i]);
}

}