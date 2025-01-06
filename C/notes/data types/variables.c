#include<stdio.h>
int main (){

//varaibles are names we give to memory locations which are used to store values in a computer program
//naming convention : all variable names must begin with an _ or letter . can be followed by any letter or number .
//ex. int _number= 45;    or  char poop = c; 
//cant use reserved words like 'int' , 'char' etc.

//Declaring variables : 
    int x; // format: type-specifier(int) variable-name(x) semicolon(;)
    int t,y,z; //can declare multiple variables in the same line .

//Initializing variables: To initialize means to give an initial value, can be done as a part of declaration .
    x = 23; //initializing an already declared variable x . 
    int a = 55; //declaring and initializing in the same step . 

    int e,f = 12; // here only e will be initialized with number 12 , f will remain uninitialized . 
    
    return 0;
}
  

