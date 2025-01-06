#include<stdio.h>
#include<stdlib.h>

int main(){
    int number = 55;
    int *pnumber =  &number;

    printf("The address where the pointer variable is stored at is : %p\n",&pnumber);
    printf("The address which the pointer variable points to is  : %p\n",pnumber);
    printf("The value which is stored in the address which the pointer variable is pointing to is : %d\n",*pnumber);

    return 0;

}