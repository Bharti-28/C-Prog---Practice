#include<stdio.h>
int main(){
    int n;
    printf("enter number: ");
    scanf("%d", &n);
    printf("%d\n", n);

    //factorial is a multiplication of no.s with previous no. exa. 1!=1, 2!=2, 3!=6
    int fact=1;
    for(int i=1; i<=n; i++){
        fact= fact*i;
    }
    printf("Final Factorial is: %d", fact);
    return 0;
}