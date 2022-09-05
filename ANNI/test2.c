<<<<<<< HEAD
//read a text file and print it to the screen with c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>
#include <math.h>
#include <time.h>
#include <assert.h>
#include <limits.h>
#include <float.h>

int main() {
    FILE *fp;
    char ch;
    fp = fopen("test.txt", "r");
    if (fp == NULL) {
        printf("Error opening file");
        exit(1);
    }
    while ((ch = getc(fp)) != EOF)
        putchar(ch);
    fclose(fp);
    return 0;
=======
#include<stdio.h>
int main() {
    printf("hello world!");
>>>>>>> 402299cd9a7481b38afb45521a06e266e7e4f3b0
}