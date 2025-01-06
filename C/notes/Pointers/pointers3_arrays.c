#include<stdio.h>
#include<stdlib.h>

int main(){
    //In C, the name of an array, is actually a pointer to the first element of the array.
    //The memory address of the first element is the same as the addr of the name of the array:
    int sample_array[7]= {12,445,234,745,1234,1,44};

    printf("%p\n", sample_array); //using the name like a pointer 
    printf("%p\n",&sample_array); // using & to get the address of thhe name 
    printf("%p\n",&sample_array[0]); //using & to get the address of the first element in the array
    //As we can see all of them output the same address

    //This means we can deference to get stores values: 
    //And use pointer arithmetic to get every values in the array

    printf("%d\n", *sample_array);
    printf("%d\n", *(sample_array+ 1));
    printf("%d\n", *(sample_array+ 2));
    printf("%d\n", *(sample_array+ 3));

    for(int i =0 ; i<7; i++){
        printf("%d ",*(sample_array+i));
    }
    return 0;
}