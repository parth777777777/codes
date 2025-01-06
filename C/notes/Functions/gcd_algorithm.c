#include<stdio.h>
#include<stdlib.h>

int gcd( int x,  int y);

int main(){
    int GCD= gcd(12,42);
    printf("Gcd: %d",GCD);
}

int gcd( int x,  int y){
    int temp;
    while(y != 0){
        temp = x%y;
        x=y;
        y=temp;
    }
    return x;
}