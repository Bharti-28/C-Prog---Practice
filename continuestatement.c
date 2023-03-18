#include<stdio.h>
int main(){
    for(int i=1; i<=5; i++){
        if(i==3){
            continue; //only skip what is the condition is and continue the program
        }
        printf("%d \n", i);
    }
    return 0;
}