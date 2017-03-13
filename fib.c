#include <stdio.h>
#include <conio.h>

int arr[10];
int count = 0;
int fibo(int a){

if(a == 0){arr[0] = 0;return 0;}
if(a == 1){arr[1] = 1;return 1;}

if(arr[a-1]!=0 && arr[a-2]!=0 && a>1){
    arr[a] = arr[a-1]+arr[a-2];
    return arr[a];
}
arr[a] = fibo(a-1)+fibo(a-2);


}

int main(){


    int a = 10;

    fibo(a);
    int i=0;

    for(i=0; i<10; i++){
        printf("%d\n",arr[i]);
    }
    return 0;
}
