# include<stdio.h>
void num(int a);
void main()
{
    int a = 10;
num(a);
}
void num(int a)
{
if(a==0)
        {
        printf("%d",0);
        }
else
    {

    printf("%d",a);
    num(a-1);

    }
}
