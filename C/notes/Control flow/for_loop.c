#include<stdio.h>
#include<stdlib.h>
//program that adds every number upto certain iterations using for loop.
int main(){
    int n;
    printf("Enter iterations:");
    scanf("%d",&n);
    long long sum=0;
    for(int i=0;i<n;++i){
        sum+=i;
    }
    printf("%lld",sum);
}

/*A for loop is appropriate when the loop involves updating a varaible.
  A while loop is better for when the conditions are otherwwise*/