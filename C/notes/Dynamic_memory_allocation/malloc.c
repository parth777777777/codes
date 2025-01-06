#include<stdio.h>
#include<stdlib.h>

int main(){
    //we can use malloc() or calloc() to allocate memory :
    int *ptr1 = malloc(100/*size*/); //SINCE WE GET AN ADDRESS RETURN A POINTER IS THE ONLY PLACE TO STORE IT 
    
    // ptr contains the address to where the memory allocated starts .

    //the correct way to use memory size allocation is by using the size of operator
    int *ptr3= NULL, *ptr4= NULL ;
    ptr3  = malloc(sizeof(*ptr1)); // allocated memory whose size is equal to the value which the pointer points to 

    ptr4 = malloc(12*sizeof(int)); // allocated memory which can store upto 12 ints

    //malloc return a pointer of type void so we should cast it to int .
    int* pointerA = (int*)malloc(100*sizeof(int)); 

    //after using memory allocation, free the memory . then set the pointer to null
    free(pointerA);
    pointerA =NULL;

    return 0; 


}