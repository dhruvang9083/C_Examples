#include<stdio.h>
void main()
{
int num,i;
int count=0;
scanf("%d",&num);
for(i=2;i<=num/2;i++)
{
    if(num%i==0)
    {
    count++;
    break;
    }
}
if(count==0)
printf("%d is prime",num);
else
printf("%d is not prime",num);
}
