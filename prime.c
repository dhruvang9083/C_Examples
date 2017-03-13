#include<stdio.h>
int main()
{

    int i,n;
    int flag = 0;

    for(n=1;n<=100;n++)
        {


    for(i=2;i<=n-1;i++)
    {
        if(n%i==0)
        {
           flag=1;
           break;
        }
        else
        {
            flag=0;
        }
    }

    if(flag == 0)
        {
            printf("%d number is prime\n",n);
        }
    else
        {
            printf("%d number is not prime\n",n);
        }

}

}
