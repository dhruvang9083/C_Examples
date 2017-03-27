#include<stdio.h>
#include<conio.h>

char arr[3][3];
int i,j;
int flag;

int sub_check_win(char c ){
    int w = 0;
    for( i=0;i<3;i++)
        {
            w= 0;
            for( j=0;j<3;j++)
                {
                    if(arr[i][j] != c)
                    {
                        w = 1;
                        break;
                    }
                }

        if(w == 0)
            {
                return 0;
            }
        }
    w = 0;
    for( j=0;j<3;j++)
    {
        w= 0;
        for( i=0;i<3;i++)
            {
                if(arr[i][j] != c)
                    {
                    w = 1;
                    break;
                    }
            }

        if(w == 0)
            {
                return 0;
            }
    }

    w = 0;
    for( i=0;i<3;i++)
        {
            if(arr[i][i] != c)
                {
                    w = 1;
                    break;
                }
        }

    if(w == 0)
        {
            return 0;
        }

    w = 0;
    for( i=0;i<3;i++){
        for( j=0;j<3;j++){
            if(arr[i][j] != c && i+j == 2){
                w = 1;
                break;
            }
        }
    }

    if(w == 0){
        return 0;
    }


    return w;
}
int check_win(){
    int o = sub_check_win('0');
    int x = sub_check_win('x');

    if(o == 0 || x == 0){
        return 0;
    }

    return 1;

}


void set_value()
{
    int row, column;
    char c;
    printf("enter the row");
    scanf("%d",&row);
    printf("enter the column");
    scanf("%d",&column);

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(i==row && j== column)
            {
                if (flag==0)
                {
                    if(arr[i][j]=='0'||arr[i][j]=='x')
                    {
                        printf("already exist");
                    }
                    else
                    {
                     arr[i][j]='0';
                    }
                    flag=1;
                }
                else
                {
                    if(arr[i][j]=='0'||arr[i][j]=='x')
                    {
                        printf("already exist");
                    }
                    else
                    {
                     arr[i][j]='x';
                    }
                    flag=0;
                }
            }

        }

    printf("\n");
    }
}
void print_arr()
{


    for(i=0;i<3;i++)
{

    for(j=0;j<3;j++)
    {
        printf("\t[%c]",arr[i][j]);


    }
    printf("\n");
}
}
void main()
{

    int win_flag = 2;
    int m = 0;

    for(m=0;m<9;m++)
    {
        set_value();
        win_flag = check_win();
        if(win_flag ==0){
            break;
        }
        print_arr();
    }

    if(win_flag == 0){
        printf("Game Over\n");
    }
    else{
        printf("Draw\n");
    }




}
