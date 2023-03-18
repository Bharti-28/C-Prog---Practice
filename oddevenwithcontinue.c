#include<stdio.h>
int main(){
    for(int i=5; i<=50; i++){
        if(i % 2 !=0){ //reminder not equal to zero so this is odd no. from 5 to 50
            printf("%d \n", i);
        }
    }
    return 0;
}