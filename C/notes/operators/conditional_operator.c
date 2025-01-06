#include<stdio.h>
int main(){
    char x;
    int y=0;
    printf("enter a digit: ");
    scanf("%d",&y);
    x = y >100 ? 'W' : 'L'; //if y>100 then x = 'w' else x= 'L'
    printf("%c",x);
    return 0;

}