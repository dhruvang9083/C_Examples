#include  <stdio.h>
#include  <conio.h>

int a = 2;
void print_values(){
    printf("a = %d\n", a);
}

void add(int x){
    //x is a's copy
    printf("add method\n");
    x++;
    printf("x = %d",x);
}

void pointer_add(int *p){
    (*p)++; // *p = value at pointer p
}
int main(){

    printf("main method\n");
    print_values();
    printf("pass by value\n");
    add(a);
    print_values();// a = 2

    printf("pass by reference\n");
    pointer_add(&a); //&a  = a's address
    print_values();

    /*pointer
    int num = 10;
    printf("Value of var is: %d\n", num);
    printf("Address of var is: %u\n", &num);
    end pointer
    */

    return 0;
}

