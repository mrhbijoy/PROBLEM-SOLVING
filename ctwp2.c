//https://codeto.win/problem/1000
#include<stdio.h>
int main() {
unsigned int N;
scanf("%d", &N);
int sum = 0;
for (int i = 0; i < N; i++) {
int num;
scanf("%d", &num);
sum += num;
}
if (sum % 2 == 0) {
printf("Even\n");
} else { printf("Odd\n"); }
}

