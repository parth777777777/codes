#include<stdio.h>
#include<stdlib.h>

int main(){
    //Break can be used to break a loop.
    for (int i=0; i<10 ;i++){
        printf("%d\n",i);
        if (i==5)
        {
            break; //prints upto 4, break when encoutners 5
        }
        
    }
    //continue will break/skip an iteration .
    unsigned int j=0;
    while(j<=10){
        if (j==4){ 
            j++;
            continue;    //continue skips the iteration with 4
        }
        printf("%d",j);
        j++;
    }
    return 0;
}