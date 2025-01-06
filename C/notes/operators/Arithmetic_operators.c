#include<stdio.h>

int main(){
    //ARITHMETIC OPERATORS
    int a = 23; 
    int b = 12;
    int sum = a + b;
    int diffrence= a-b;
    int remainder = a%b;
    int product = a*b;
    printf("a+b=%d\n",sum);
    printf("diffrence=%d\n",diffrence);
    printf("remainder = %d\n",remainder);
    printf("product=%d\n",product);
    
    
    printf("c is :%d\n",++a);//pre ++ or -- will increment or decrement before the statment is executed.
    printf("c is :%d\n",b++);//post ++ will increment the value after the statement is executed.
    return 0; 
}