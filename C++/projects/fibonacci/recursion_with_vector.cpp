#include<iostream>
#include <sys/types.h>
#include<vector>

std::vector<u_int64_t> dp(94,-1); //initializing all elements with -1

u_int64_t fib(int n){
	if(n<=1) return n;
	if(dp[n] != -1) return dp[n];
	return dp[n] = fib(n-1) + fib(n-2);
}

int main(){
	fib(93);
	int n;
	std::cout<<"input n (n<= 93) ";
	std::cin>> n;
	std::cout<<dp[n]<<std::endl;
}

