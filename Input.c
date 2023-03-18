#include<stdio.h>
int main(){
   int age;
   printf("enter age : ");
   scanf("%d", &age);

   /*
   In c we cannot directly call variable to print its output, cause we write output in 
   double quotation ("") marks and whichever in "", '' mark its called character in c 
   and its give output as character not as variable what the value we have assign to the variable. 
   That is why in c we use format specifier which is %d for int data types, %c and %s for character
   and %f for float or real value
   */
   printf("age is : %d", age);
}