#include<stdio.h>
int main(){
    //In while loop first check the condition then print the output
    // int i=1; //First declaration of var outside the loop
    // while(i<=5){ //termination condition
    //     printf("Hello World! \n"); //then print the value on every loop while i<=5
    //     i++; //updation 
    // }

    //print from no. n given by user
    int n;
    printf("enter number: ");
    scanf("%d", &n);
 
    //in while loop
    int i=0;
    while(i<=n){
        printf("%d", i);
        i++;
    }

    //in for loop
    // for(int i=1; i<=n; i++) {
    //     printf("%d \n", i);
    // }
    return 0;
}