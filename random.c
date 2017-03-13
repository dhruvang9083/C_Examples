#include<stdio.h>
int main()

#define ROWS 10
#define COLUMNS 10

{

int row,column;


srand((unsigned)time(NULL));
for(row=0;row<ROWS;row++)
{
for(column=0;column<COLUMNS;column++)

printf("%d\t",rand() % 100);
putchar('\n');
}
}
