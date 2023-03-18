#include<stdio.h>
int main(){
    int age = 22;
    //pointer which stores address of age
    int *ptr = &age;
    // //pointer which gives the value of address which it store to new variable
    // int _age = *ptr;
    // printf("%d", _age);

    //print addresses
    // printf("%u \n", &age);
    // printf("%u \n", ptr);
    // printf("%u", &ptr);

    //print value of addresses
    printf("%d\n", age);
    printf("%d\n", *ptr);
    printf("%d\n", *(&age));
    return 0;
}