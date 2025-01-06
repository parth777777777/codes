#include<stdio.h>
#include<stdlib.h>
int main(){
//const pointers for when we may not want the address stored to change :
long number = 9999L;
const long *pointer_to_number = &number;
printf("initial : %p\n",pointer_to_number);
//conpiler will flag any statement which wants to change the VALUE stored in address pointed by the pointer as error. 
//or show absurd outputs

//example: this is forbidden
*pointer_to_number++;
printf("%d\n",pointer_to_number);

//but changing the address in pointer itself  inst restricted
pointer_to_number += -12;
printf("final : %p",pointer_to_number);


// now for address pointed by pointer to be const:
int *const newpointer = &number; 
//now :
//newpointer += -12;      //compiler error when we try to compile 
//printf("final : %p",newpointer);
return 0;
    
}