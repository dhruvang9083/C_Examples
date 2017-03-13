#include<stdio.h>
void swap(int a, int b);
int main()
 {
  int x=11,y=22;
  swap(&x,&y);
  printf("x is %d\n",x);
  printf("y is %d",y);

 }
   swap(int *a , int *b)
    {
      int temp;
      temp = *a;
      *a = *b;
      *b = temp;
    }

