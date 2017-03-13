#include<stdio.h>
void main()
{
time_t mytime;
mytime=time(NULL);
printf(ctime(&mytime));
}
