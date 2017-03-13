#include<stdio.h>
int main()
{

    int i,n,r,p;
    scanf("%d",&p);

    for(r=1;r<=p;r++)
    {

        for(n=r;n<=p;n++)
            {
                printf(" ");

            }


                for(n=1;n<=r;n++)
                    {

                        printf("*");
                        printf("*");

                    }
                        printf("\n");

    }
            for(r=p;r>=1;r--)
                {

                    for(n=r;n<=p;n++)
                        {

                            printf(" ");

                        }
                            for(n=1;n<=r;n++)
                                {

                                    printf("*");
                                    printf("*");
                                }
                                    printf("\n");

                }

}
