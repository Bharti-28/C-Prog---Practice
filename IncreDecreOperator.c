#include<stdio.h>
int main(){
    // int i=1;

    //This is post-increment operator
    // printf("%d \n", i++); //first use variable value which is 1 then increment the value by 1 which will be print as 2
    // printf("%d \n", i); //will print incremented value which is 2

    //This is pre-increment operator
    // printf("%d \n", ++i); //first increment the value by 1 then use var value which is incremental by 1 is 2
    // printf("%d \n", i); //will print incremented value which is 2

    //This is post-decrement operator
    // printf("%d \n", i--); //first use var value which is 1 then decrement the value by 1 which will be 0 
    // printf("%d \n", i); //will print decremented value which is 0

    // printf("%d \n", --i); //first decrement the value by 1 then use var value which is decremental by 1 is 0
    // printf("%d \n", i); //will print decremented value which is 0

    //Loop counter can be float or character
    
    for(float i=1.0; i<=5.0; i++) {
        printf("%f \n", i);
    }

    for(char ch='a'; ch<='z'; ch++) {
        printf("%c \n", ch);
    }
}