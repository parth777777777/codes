#include<iostream>
using namespace std;

//variables in a program can access code block and stack memory but to access the heap and hard disk we need a pointer varibale 
//also used to parameter passing 
int main(){
	//int varible declaration and initialization 
	int a =10; //stored in stack memory
	//pointer variable declaration 
	int *p; //stored in stack aswell
	//pointer varible assignnmet 
	p = &a ; //assigned with the address of a
	//accesing the address
	cout<<p<<endl;
	//accessing the value stored in that adress (dereferencing)
	cout<<*p<<endl;
	return 0;
}
