#include<iostream>
#include<stdio.h>
using namespace std;

//using arrays as parameters
void array_printer(int A[], int n){
	for(int i =0 ; i<n ; i++){
		cout<<A[i]<<endl;
		}
}
int main(){
	int array[5] = {1,2,3,4,5};
	array_printer(array, 5);
	//the name of any array is a pointer that points to the address of the first entry
	//therefore in the printer function we iterate through the array using the pointer which is the name of the array 
	return 0;
}
