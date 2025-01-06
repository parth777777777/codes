#include<stdio.h>
int main(){
    _Bool a = 1;
    _Bool b = 1;
    _Bool c = 0;
    _Bool result1= a && b; //AND operator 
    _Bool result2= a && c;
    _Bool r3 = a || b; // OR 
    _Bool r4 = a || c;
    _Bool r5 = !c; // NOT
    _Bool r6 = !a;
    

    printf("%d\n",result1);
    printf("%d\n",result2);
    printf("%d\n",r3);
    printf("%d\n",r4);
    printf("%d\n",r5);
    printf("%d\n",r6);
    return 0;
}