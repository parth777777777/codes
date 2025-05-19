#include<iostream>
using namespace std;

int main(){
	//to access memory in heap we need to use malloc in C but in c++ we use 'new' and instead of free we use delete 
	//lets allocate memory for 5 ints 
	//in C:
	//p = (int*)malloc(5*sizeof(int));
	//in C++:
	int *p = new int[5];
	
	//printing address and then assigning value to it ;
	for(int i =0; i<5 ; i++){
		cout<<p+i<<" : ";
		cin>>*(p+i);
	}
	return 0;
}
