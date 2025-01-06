#include<stdio.h>
#include<stdlib.h>

/*A function is a block of code which only runs when it is called.
 You can pass data, known as parameters, into a function.
 Functions are used to perform certain actions, and they are important for reusing code:
Define the code once, and use it many times. 
*/

int calculateSum(int x, int y){  //int x and int y are function parameters .
    return x+y;     //code to be executed when function is called .
}
int resultArray[3]; //array to store results

int main(){
    resultArray[0]= calculateSum(3,5);  //values entered are called function arguements .
    resultArray[1]= calculateSum(256,546);  
    resultArray[2]= calculateSum(-585,544);

    for(int i= 0 ; i<3; i++){
        printf("The result is %d\n", resultArray[i]);
    }

    return 0;
}