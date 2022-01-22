#include <stdio.h>

float conver(float a);

int main (){
    int f;
    int i;
    int lower, upper, step; 
    lower=0;
    upper=300;
    step=20;
    for(i=lower;i<=upper;i+=20){
    conver(f);
    printf("%i F %.2f °C\n",f,conver(f));
    f = f + step; 
    }
}

float conver(float a){
    float celsius;
    celsius = 5 * (a-32) / 9;
    return celsius; 
}

