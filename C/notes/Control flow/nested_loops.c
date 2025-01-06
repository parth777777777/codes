#include<stdio.h>
#include<stdlib.h>

int main() {
    int i,j;
    for(i=1; i<=3;++i){
        printf("Outer: %d\n",i);
        for(j=1; j<=3; ++j){
            printf("Inner: %d\n",j);
        }
    }
}