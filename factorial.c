#include<stdio.h>
void main()
{


int a,b;
unsigned long long factorial = 1;
scanf("%d",&a);
    if(a<0)
        printf("negative");
    else
        {

            for(b=1;b<=a;b++)
            {
            factorial = factorial * b;
            }
            printf("the value is %d = %llu",a,factorial);
        }

}
