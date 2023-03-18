#include<stdio.h>
int main(){
    int side;
    printf("enter side : ");
    scanf("%d", &side);
    side =  side * side; // also we can write as define formula after getting input then it'll work
    printf("Area of Square is : %d", side); //also we can right as printf("Area of Square is : %d", side*side); directly
    return 0;
}