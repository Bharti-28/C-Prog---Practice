#include<stdio.h>
int main() {
    int x;
    printf("enter number: ");
    scanf("%d", &x);
    printf("%d \n", x>9 && x<100 ); //we can use both rational and logical operators in one condition 
    return 0;
}