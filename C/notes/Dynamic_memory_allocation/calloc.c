#include<stdio.h>
#include<stdlib.h>

int main (){
    int *ptr1 = (int*)calloc(10/*amount*/, sizeof(int)/*size*/); 
    // amount -- number of data items for which the space is required 
    // size -- size of each data item 
    // the memory area will be initailized to zero (NULL)

    free(ptr1);
    ptr1 = NULL;

    return 0;
}