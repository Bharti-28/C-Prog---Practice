#include<stdio.h>
int main(){
    int sum=0;
    for(int i=5; i<=50; i++){
       sum += i; 
    }
    printf("5 to 50's sum is: %d", sum);
    return 0;
}