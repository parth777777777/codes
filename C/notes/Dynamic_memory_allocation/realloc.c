#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main (){
    //realloc enables you to re allocate memory previously allocated using malloc or calloc
    char *str = NULL;

    //Allocating memory 
    str = (char*)malloc(20*sizeof(char));
    strcpy(str,"parththefart"); //adding data into allocated memory 
    printf("String = %s , address = %p \n", str, str);

    //realocating memory 
    str = (char*)realloc(str,35*sizeof(char)); //adds 35 more bytes to already allocted 20 bytes to the memory pointer by str   
    strcat(str,".com");
    printf("String = %s , address = %p \n", str, str);


    free(str);

    return 0;


}