#include<iostream>
using namespace std;
int main(){

	//declaring an arrray of int 
	int a[5];
	//initializing an array
	for(int i = 0; i<5 ; i++){
		cin>>a[i];
	}
	//printing an array 
	for(int i =0 ; i<5 ; i++){
		cout<<a[i]<<endl;
	}
	//size of array in bytes
	cout<<sizeof(a)<<" bytes"<<endl;
	//size of array as number of members
	cout<<sizeof(a)/sizeof(int)<<" members"<<endl;

	//foreach loop 
	for(int x:a){
		cout<<x<<endl;
	}

	return 0;
}
