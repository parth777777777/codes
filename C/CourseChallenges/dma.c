#include<stdio.h>
#include<stdlib.h>

int main(){
    char *pstr = NULL ;
    printf("enter the length of your string :");
    int leng;
    scanf("%d",&leng);

    pstr = (char*)malloc(leng*sizeof(char));

    printf("\nenter your string : " );
    scanf("%s",pstr);

    printf("\n%s",pstr);

    free(pstr);

    return 0;
        
}