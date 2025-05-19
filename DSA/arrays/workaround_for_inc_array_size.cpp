#include<iostream>
#include<stdio.h>
using namespace std;

void printer(int* p){
	for(int i = 0 ; i<10 ; i++){
		cout<<p+i<<endl;
	}
	cout<<endl;
}
int main(){
	//we cannot change size of array once declared
	//so what we do is create a new , bigger array and copy the contents of our array into the new one , assuming old array is denoted by pointer p and new one by q . We free the memory pointed by p and then make p point to the same address as q and then nullify q . 
	int *p = new int[10];
	int *q = new int[15];
	printer(p);
	for(int i= 0 ; i<10 ; i++){
		q[i]= p[i];
	}
	delete[] p;
	p = q;
	q= NULL;
	printer(p);
	delete[] p;
	return 0;
}

