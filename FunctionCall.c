#include<stdio.h>

void Namaste();
void Bonjour();

int main(){
    char ch;
    printf("Enter f if french & i if indian: ");
    scanf("%c", &ch);
    
    if(ch=='i'){ //call functions
        Namaste();
    } else if(ch=='f'){
        Bonjour();
    } else{
        printf("Sorry you have entered wrong!");
    }
    return 0;
}

void Namaste(){
    printf("Namaste!");
}

void Bonjour(){
    printf("Bonjour");
}