#include<iostream>
using namespace std;

//structure definition 
struct{
	int length;
	int breadth;
} rectangle_A, rectangle_B; //structure declaration

struct complex_number {
	int real;
	int imaginary;
} ;

struct {
	int roll;
	string name;
	string department;
	string addr;
} student_a;

int main(){
	//initialization
	rectangle_A.length =2;
	rectangle_A.breadth = 1;
	cout<<rectangle_A.length*rectangle_A.breadth<<endl;	
	
	complex_number n1;
	n1.real=10;
	n1.imaginary=15;
	cout<<n1.real<<" + i"<<n1.imaginary<<endl;

	return 0;
}


