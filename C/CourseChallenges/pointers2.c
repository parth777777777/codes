#include<stdio.h>
#include<stdlib.h>

void square(int *ptr);

int main(){
    int number=0;
    printf("Enter Number : ");
    scanf("%d",&number);
    square(&number);
    printf("%d",number);
    return 0;
}

void square(int *ptr){
    *ptr = *ptr * *ptr;
    return ;
}