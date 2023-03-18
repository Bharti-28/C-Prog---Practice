#include<stdio.h>
int main() {
    int x;
    printf("enter a number : ");
    scanf("%d", &x);
    printf("%d", x % 2 == 0); 
    // if modulo will remains means it won't divided by 2 and gives false which is 0
    // if modulo will not remains anything means it will divisible by 2 and gives true which is 1
    return 0;
}