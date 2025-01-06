#include<stdio.h>
#include<stdlib.h>
int recursive_fact(int n);
int iterative_fact(int n);
int recursive_fib(int n);
int iterative_fib(int n);

int main(){
	int n;
	printf("enter number: ");
	scanf("%d",&n);
	printf("The factorial of number %d using recursion = %d  \n", n, recursive_fact(n));
	printf("The factorial of number %d using iteration = %d  \n", n, iterative_fact(n));
	printf("The %dth term in fibonacci sequence using recursion is = %d  \n", n, recursive_fib(n));
	printf("The %dth term in fibonacci sequence using iteration is = %d  \n", n, recursive_fib(n));
	return 0;
}

int recursive_fact(int n){
	if(n == 0){
		return 1;
	}
	return n * recursive_fact(n-1);

}

int iterative_fact(int n){
	int result = 1;
	for (int i = n ; i>0 ; i--){
		result *= i;
	}
	return result;
}

int recursive_fib(int n){
	if (n<=1)
	{
		return n;
	}
	return recursive_fib(n-1) + recursive_fib(n-2);
}

int iterative_fib(int n){
	int a=0;
	int b=1;
	for(int i =0 ; i<n ; i++){
		int temp = b;
		b =a+b;
		a=temp;
	}
	return b;
}
