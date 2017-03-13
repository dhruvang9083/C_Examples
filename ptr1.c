#include<stdio.h>
int main()
{
    int *p;

    int i,total=0;

    int arr[5];

    printf("enter elements :");

    for(i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }

    p=&arr[0];

    for(i=0;i<5;i++)
    {

        printf("%d\n",*p);

        total = total + *p;
        p++;
    }
    printf("total = %d",total);
}

