#include<stdio.h>
//declare function with one parameter
void printTable(int n);

int main(){
    int n;
    printf("enter number: ");
    scanf("%d", &n);
    
    //call the function parameter
    printTable(n); //arguement/ actual parameter
    return 0;
}

//defined function
void printTable(int n){ //parameter/ formal parameter
    for(int i=1; i<=10; i++){
        printf("%d \n", i*n);
    }
}