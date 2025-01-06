#include<stdio.h>
#include<stdlib.h>

int length(const char *pstring);

int main(){
    char string[]= "meow";
    printf("Length of string is '%d' charectors.\n",length(string));
}

int length(const char *pstring){
    const char *temp; 
    temp = pstring;
    while(*pstring){
        ++pstring;
    }
    return pstring-temp;
    
}