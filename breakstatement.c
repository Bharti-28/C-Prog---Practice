#include<stdio.h>
int main(){
    for(int i=1; i<=5; i++){
        if(i==3){
            break; //helps to exit from the loop
        }
        printf("%d \n", i);
    }

    printf("end");
    return 0;
}