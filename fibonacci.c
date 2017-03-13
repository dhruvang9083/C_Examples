#include<stdio.h>
void main()
{
int i,j,t=0,p=1,n;
scanf("%d",&n);
for(i=1;i<=n;i++)
{
if(i==1)
{
    printf("%d",t);
    continue;
}
if(i==2)
{
    printf("%d",p);
    continue;
}
j=t+p;
t=p;
p=j;
printf("%d\n",j);
}
}
