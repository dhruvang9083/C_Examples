#include <stdio.h>
int main ()
{
/* local variable definition */
char grade= 'b';
printf("%d",grade);
switch(grade)
{
case 'A' :
printf("Excellent!\n" );
break;
case 'B' :
case 'b' :
printf("You passed\n" );
break;
case 'C' :
printf("Well done\n" );
break;
case 'D' :
printf("fail\n" );
break;
case 'F' :
printf("Better try again\n" );
break;
default :
printf("Invalid grade\n" );
}
printf("Your grade is %c\n", grade );
return 0;
}
