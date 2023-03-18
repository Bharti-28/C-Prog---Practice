#include<stdio.h>
//took two parameters int a, b
int sum(int a, int b);

int main(){
    //print them for output
    int a, b;
    printf("enter number: ");
    
    scanf("%d", &a);

    printf("enter number: ");
    scanf("%d", &b);
    
    //call two parameters
    int s = sum(a, b);
    printf("sum is: %d \n", s);
    return 0;
}

//copy value of a and b and will return sum value to the main function 
int sum(int x, int y){
    return x + y;
}

