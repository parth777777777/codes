#include<iostream>
#include <sys/types.h>

u_int64_t fib(int n){
	if(n<=1) return n;
	return fib(n-1) + fib(n-2);
}

int main(){
	int n;
	std::cout<<"Enter number of terms you want to calculate : ";
	std::cin>>n;
	std::cout<<"Fibonacci series: \n";
	for(int i = n ; i>=0 ; i--)
		std::cout<<fib(i)<<"\n";
	return 0;
}
