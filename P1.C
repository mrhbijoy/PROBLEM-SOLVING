#include<stdio.h>
int main()
{
int a[5],i,min;
printf("Enter the elements of the array");
for(i=0;i<5;i++)
{
scanf("%d",&a[i]);
}
min=a[0];
for(i=0;i<5;i++)
{
if(a[i]<min)
{
min=a[i];
}
}
printf("The minimum value of the array is %d",min);
return 0;
}
