#include<stdio.h>

//Declaration of the funtion
void printHello();
void printGoodbye();

//Call the function multiple times and reused
int main(){
    printHello();
    printGoodbye();
    return 0;
}

//Defination(what we want to print) of the function, we can also write multiple times and things what we want to print/output
void printHello(){
    printf("Hello! \n");
}

void printGoodbye(){
    printf("Goodbye:) ");
}