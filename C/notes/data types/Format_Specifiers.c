#include<stdio.h>

int main(){
    /*
    Format specifiers are used when displaying varaibles as output .   
    they specify the type of data of the variable to be displayed .
    */
    int intVar= 33;
    float floatVar= 212.34552;
    double doubleVar= 7.44E-23;
    char charVar = 'Y';
    _Bool boolVar= 0;

    printf("IntVar= %i\n",intVar);
    printf("floatVar= %f\n",floatVar);
    printf("doubleVar= %e\n",doubleVar);
    printf("charVar = %c\n",charVar);
    printf("boolVar = %i\n",boolVar);
    
    printf("floatVar upto 3 significant digits is : %.3f",floatVar);

    return 0;
    
}