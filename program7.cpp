#include <iostream>

using namespace std;

int main()
{
    int var;
    int *pointer;

    pointer = &var;
    var = 421;
    printf("Address of the integer variable var : %p\n", &var);
    printf("Value of var : %d\n", var);
    printf("Value of the integer pointer variable : %p\n", pointer);
    printf("Value which pointer points to : %d\n", *pointer);
    printf("Address of the pointer : %p\n", &pointer);
}