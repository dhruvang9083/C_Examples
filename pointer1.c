#include<stdio.h>
void main()
{
int i;
int sum=0;
int *ptr;
int numArray[10];

printf("enter the numbers");

for(i=0;i<10;i++)
scanf("%d",&numArray[i]);
ptr = numArray;
for(i=0;i<10;i++)
{
sum = sum + *ptr;
ptr++;
}
printf("the sum is: %d",sum);

}
