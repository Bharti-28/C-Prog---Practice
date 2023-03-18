#include<stdio.h>
int main(){
    int marks;
    printf("enter marks(0-100): ");
    scanf("%d", &marks);

    // if(marks >= 0 && marks <=30){
    //     printf("FAIL \n");
    // } else if(marks >30 && marks<=100){
    //     printf("PASS \n");
    // } else {
    //     printf("wrong marks!");
    // }

    // marks<=30 ? printf("FAIL") : printf("PASS"); //using ternary operator we can make it more simple

    if(marks < 30) {
        printf("c \n");
    } else if(marks >= 30 && marks < 70){
        printf("B \n");
    } else if(marks >= 70 && marks < 90){
        printf("A \n");
    } else {
        printf("A+");
    }
}