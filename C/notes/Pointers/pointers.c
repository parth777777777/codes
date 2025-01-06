#include<stdio.h>
#include<stdlib.h>

int main(){
    int number = 32;
    int *pnumber = &number;  //space between * and name is optional 
    printf("The address of int named number is %p\n",pnumber); // %p is the format specifier for pointers
    //this is the same as :
    printf("%p\n",&number); // '&' charector used as a prefix == memory address of the variable 

    //Deference: when we want  to call the value stored inside the variable using a pointer 
    printf("%d\n", *pnumber); // '*' is the deference charector and when used with pointer varaible it derefences the address hence returnign the value.

    int result = *pnumber + 18; // 32+ 18 
    printf("%d\n",result);  // outputs 40


    int count = 10 , x;
    int *pointer_int = NULL; //good practice to initialize a pointer variable to NULL 
    
    pointer_int = &count;
    x = *pointer_int;

    printf("Count is : %d | X is : %d\n",count,x);

    //printing addresses :
    printf("Address stored in pointer variable 'pointer_int' is : %p\n",pointer_int);
    printf("Address OF pointer varaible 'pointer_int' is : %p\n",&pointer_int);

    //size occupied by a pointer :
    printf("The size of a pointer variable in  memory is : %d bytes i.e %d bits (for 64bit devices)\n",sizeof(pointer_int),sizeof(pointer_int)*8 );

    

    return 0;
}