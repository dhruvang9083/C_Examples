#include <stdio.h>
#include <conio.h>

void main()

{
int p,r;
int result;
printf("Enter p: ",p);
scanf("%d",&p);
printf("Enter r: ",r);
scanf("%d",&r);

    char op;
    printf("Enter char: ");
    scanf(" %c",&op);
   //canf("Enter char =getchar()",&plus);
    switch(op)
    {
        case '+' :
            result = p+r;
            printf("\nResult is %d",result);
            break;

        case '-' :

            result = p-r;
            printf("\nResult is %d",result);
            break;
        default:
            printf("\nInvalid operator.");
            break;
    }
}
