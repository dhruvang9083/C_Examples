#include<stdio.h>

void main()
{
int m=22;int n=44;
swap(m , n);
printf("main - the value m %d and n %d\n",m,n);

}
void swap(int a, int b)
{
int temp;
temp=a;
a=b;
b=temp;
printf("swap - the value m %d and n %d\n",a,b);
}
