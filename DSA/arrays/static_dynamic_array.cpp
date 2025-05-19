#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
	// static array declaration
	int A[5] = {0};
	printf("created array in stack at %p\n", &A);
	
	//dynamic array allocation 
	int *p;
	p = new int[5];
	cout<<"created array in heap at "<<p<<endl;

	//assigning values 
	A[1] = 12;
	p[1] = 12;
	printf("A[1]= %d \np[1] = %d\n",A[1],p[1]);

	delete[] p;
	cout<<"freed allocated memory for array in heap"<<endl;
	return 0;
}
