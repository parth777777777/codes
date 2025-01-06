#include<stdio.h>
#include<stdlib.h>

void swap_without_pointers(int x , int y);
void swap_with_pointers(int *x , int *y);

int main(){
    int a = 100;
    int b = 200;
    printf("\nSwapping without pointers:\n");
    printf("Value of A before : %d\n",a);
    printf("Value of b before : %d\n",b);
    swap_without_pointers(a,b);
    printf("Value of A after : %d\n",a);
    printf("Value of b after : %d\n",b);
//As we can see value doesnt change when using Pass by value in function 

    printf("\nSwapping with pointers:\n");
    printf("Value of A before : %d\n",a);
    printf("Value of b before : %d\n",b);
    swap_with_pointers(&a,&b);
    printf("Value of A after : %d\n",a);
    printf("Value of b after : %d\n",b);
// Values change when using pass by reference

}

void swap_without_pointers(int x , int y){
    int temp;
    temp = x;
    x=y;
    y= temp;

    return;
}

void swap_with_pointers(int *x , int *y){
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;

    return;
}