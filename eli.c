# include<stdio.h>
//void num(int a);
int x;
void main()
{

    printf("enter any number:",x);
    scanf("%d",&x);
    int a =1;
    num(a);

}
int num(int a)

{
    if (a<=x)
{
    if(a%2==1)
        {
        printf("  %d",a);
        num(a+1);

        }
    if(a%2!=1)
    {
        num(a+1);
    }}
 return a;
}


