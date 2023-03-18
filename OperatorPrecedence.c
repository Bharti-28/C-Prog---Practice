//Program for Operator Precedence(Level of Using or Priority) in C
#include<stdio.h>
int main(){
    printf("%d \n", 5+2/2*3); // when all operators are diff. use BODMAS rule to solve
    printf("%d", 5*2/2*3); //when same operators and precedence showing, use Left Hand Side Associativity
    printf("%d", 5*2-2*3); //same as above
    printf("%d", 5*(2/2)*3); //when there will be brackets use BODMAS rule 
    return 0;
}