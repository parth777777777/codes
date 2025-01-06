#include<stdio.h>
//using scanf
/*
Rules of scanf :
1.returns the number of items it succesfully reads .
2. when we use scanf to read value of a basic variable type , precese the varible name with an &.
3. when we use scanf to read a string into a charector array , dont use &.
*/

//%s == string , %d == int , %c == char , %f ==  float , %lf == double .

//example code:

int main () {

    char str[100]; //declare string variable 'str' as an array of charectors , with size in square brackets . 
    int i;  //declare integer variable 'i'.

    printf("enter a value : ");
    scanf("%s %d",str, &i); //scanf uses pointer to variables 

    printf("\nYou entered : %s %d", str, i); 
    return 0;
}