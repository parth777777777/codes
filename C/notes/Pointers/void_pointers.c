#include<stdio.h>
#include<stdlib.h>  

//void means absence of any type 
//a pointer of type void* can contain the address of any dat type ,we just need to know the data type to cast when we derefence it 
//void* is often used as a parameter type or return value type wiht functions that deal with data ina type independent way .
//when you want to access the value(lets say int )stored at the addres inthe void* pointer , you must first cast the pointer to type int.
int main (){
    int i =12 ;
    float f= 1.456;
    char c = 'j';

    void *vptr =NULL;

    vptr = &i;
    printf("address of int i is : %d\n",*(int *)vptr);

    vptr = &f;
    printf("address of float f is : %0.3f\n",*(float *)vptr);

    vptr = &c;
    printf("address of char c is : %c\n",*(char *)vptr);

    //here we use the same pointer to point to various different data types .

    return 0;
}