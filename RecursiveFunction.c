#include<stdio.h>
void printHW(int count);

int main(){
    printHW(10);
}

//recursive function- calling itself again and again
void printHW(int count){
    if(count == 0){
        return; //returns nothing, just keyword and function is void like it will return nothing
    }
    printf("Hello World!\n");
    printHW(count-1);
}