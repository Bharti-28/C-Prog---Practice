#include<stdio.h>

float squareArea(float side);
float circleArea(float radius);
float rectangleArea(float a, float b);

int main(){
     float side = 4.0;

     printf("Area of square is: %f\n", squareArea(side));
}

float squareArea(float side){
    return side*side;
}

float circleArea(float radius){
    return 3.14*radius*radius;
}

float rectangleArea(float a, float b){
    return a*b;
}