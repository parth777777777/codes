#include<stdio.h>
#include<stdlib.h>
#define pi 3.14 //preprocessor lets you define constants . pi is not a variable , it cannot be assigned a value  
                // compile time substitution takes place , 3.14 will be used wherever pi was.
int main(){
    const int number = 124; 
    //const makes int number a read only value;
    //better newer approach than #define : lets you declare a type and allows better control over which parts   
    //                                     of a program can use that constant
    return 0;
}