#include<iostream>
using namespace std;

int main(){
	//referencing a variable is assigning the anotehr variable with the same address as another variable 	
	int a = 10 ; 
	cout<<&a<<endl;//prints the address of a
	int &r = a; //assigning the address of 'r' with that of 'a'
	cout << &r <<endl; 
	// as we can see , the address of both 'a' and 'r' is the same , both a dn r now , are aliases for the same address . 
	cout<<a<<endl;
	a++;
	cout<<a<<endl;
	r++;
	cout<<r<<endl;

	return 0;
}
