#include<stdio.h>
#include<stdlib.h>
//Recursion is a technique of making a function call itself 
//Here we use recursion to add a range of numbers :
int sum(int k); //Function declaration , considered good praactice to declare functions like this at the start

int main(){
    int result = sum(10);
    printf("%d",result);
}

int sum(int k){    //functioin definition
    if(k>0){
        return k+sum(k-1);  
    }
    else{
        return 0;
    }
}
// explanation: 
// 10 + sum(9)
// 10 + sum(9-1)
// 10 + 9 + sum(8)  
// ...
// ....
// .....
// 10 + 9 + 8 + 7 + 6 + 5 + 4 + 3 + 2 + 1 + sum(0)
// 10 + 9 + 8 + 7 + 6 + 5 + 4 + 3 + 2 + 1 + 0 = 55
