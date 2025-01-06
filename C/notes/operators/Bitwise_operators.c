#include<stdio.h>
//bitwise operators work on bits of value 
int main(){
    unsigned int a= 45; // a = 0010 1101 
    unsigned int b= 97; // b = 0110 0001
    int result1= a & b; // result1 = 0010 0001 == 33 base10
    int result2= a | b; // result2 = 0110 1101
    int result3 = ~a; 
    int result4 = a<<4; //shift bits by 4 bits to the left in a 32 bit unsigned int. 
    int result5 = a>>4; //shits to the right by 4 and we end up losing those 4 bits .
    printf("%d\n",result1);
    printf("%d\n",result2);
    printf("%d\n",result3);
    printf("%d\n",result4);
    printf("%d\n",result5);
    return 0;
}