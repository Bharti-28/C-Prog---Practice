#include<stdio.h>
int main(){
    int i=5; //intialisation

    //dowhile loop is like first print the output and then check the condition
    do{ 
        printf("%d \n", i); 
        i--; //updation
    } while(i>=1); //condition

    return 0;
}