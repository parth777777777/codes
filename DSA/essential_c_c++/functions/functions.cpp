#include<iostream>
using namespace std;

void swap_by_value(int x, int y){
	int temp = x;
	x=y;
	y=temp;
}

void swap_by_address(int *x, int *y){
	int temp = *x;
	*x = *y;
	*y = temp;
}

void swap_by_reference(int &x, int &y){
	int temp = x;
	x=y;
	y=temp;
}

int main(){
	int a = 10;
	int b = 20;

	swap_by_value(a,b);
	cout<<a<<","<<b<<endl;
	//as we can see swap by value doesnt change values of a and b rather it changes the values of variables x and y which are local to swap function
	

	swap_by_address(&a,&b);
	cout<<a<<","<<b<<endl;
	//we pass in the address of a and b in the swap function and it indirectly accesses the values of a and b from main function , and swaps them

	swap_by_reference(a,b);
	cout<<a<<","<<b<<endl;
	//swap by reference accesses variables from main function because it too is part of the main function , though it may be written in modular fashion , its machine code is monolithic and hence we should avoid swap by reference in complex situations llke where loops are involved
	
	return 0;
}
