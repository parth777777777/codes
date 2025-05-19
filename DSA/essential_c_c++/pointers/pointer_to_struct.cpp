#include<iostream>
using namespace std; 

struct rectangle{
	int length;
	int breadth;
} r;

int main(){
	rectangle *p1 = &r;
	//to assign values using pointer
	(*p1).length= 10;
	//or in c++:
	p1->length=10;

	cout<<p1->length<<endl;

	//to create a object of type struct rectangle dynamically :
	struct rectangle *p2 ;
	p2 = new rectangle;
	p2->length=20;
	p2->breadth=25;

	cout<<p2->length<<endl;
	cout<<p2->breadth<<endl;
}
