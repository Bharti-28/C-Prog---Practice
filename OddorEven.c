#include<stdio.h>
int main() {
    int x;
    printf("enter a number : ");
    scanf("%d", &x);
    printf("Number is Even : %d \n", x % 2 == 0);
    printf("Number is Odd : %d", x % 2 == 1);
    return 0;
}

//OddorEven it is opposite of divisible by 2 program cause when we got true-1 for divisible by 2 it is 
//false-0 for oddeven 