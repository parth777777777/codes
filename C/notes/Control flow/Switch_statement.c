#include<stdio.h>
#include<stdlib.h>

int main(){
    enum Weekday {Mon,Tue,Wed,Thu,Fri,Sat,Sun};
    enum Weekday today = Mon;

    switch(today){
        case Sun:
            printf("its Sun");
            break;   
        case Thu:
            printf("its thu");
            break;
        case Sat:
            printf("its sat");
            break;
        default:
            printf("meow\n");

    }   
//Example 2:

    float value1, value2;
    char operator;
    printf("Enter two values and enter a mathematical operator:");
    scanf("%f %f %c",&value1,&value2,&operator);
    
    switch (operator)
    {
    case '+':
        printf("%0.2f\n",value1+value2);
        break;
    case '-':
        printf("%0.2f\n",value1-value2);
        break;
    case '*':
        printf("%0.2f\n",value1*value2);
        break;
    case '/':
        printf("%0.2f\n",value1/value2);
        break;
    default:
        printf("Unknown operator.");
        break;
   
    }
}