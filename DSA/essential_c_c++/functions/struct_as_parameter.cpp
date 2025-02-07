#include<iostream>
#include<stdio.h>
using namespace std;

struct rectangle {
	int length;
	int breadth;
};
//structure as a parameter passed by value in a function
void printer_func_by_value(struct rectangle r){
	//changing length locally (has to effect over the struct passed as a parameter)
	r.length = 25;
	cout<<"during pass by value function\n"<<"length = "<<r.length<<" , "<<"breadth = "<<r.breadth<<endl;
}

void printer_func_by_address(struct rectangle *r){
	//changing length of passed struct indirectly using a pointer of type rectangle 
	(*r).length = 35;
	cout<<"during pass by address func exec\n"<<"length = "<<(*r).length<<" , "<<"breadth = "<<(*r).breadth<<endl;
}
//a function that creates a new structure of type rectangle in heap using new(same as malloc in c) and initializes length and breadth of the struct and returns a pointer of type rectangle , which is pointing to the address of the struct it creates.
struct rectangle *function(){  //return type -- struct rectangle* , function name -- function
	struct rectangle *p; //declares a pointer of type struct rectangle
	p= new rectangle; //allocates memory in heap for struct rectangle type which can be accessed by the pointer p 
	p->length = 50; //iniializes length and breadth
	p->breadth =100;
	return p; //returns the address
}

int main(){
	rectangle r1={10,20};
	//initial values given to r1
	printf("values initially given to r1\nlength = %d , breadth = %d \n", r1.length,r1.breadth);
	//calling struct by value
	printer_func_by_value(r1);
	//r1 after call by value (unchanged)
	printf("after call by value function is executed\nlength = %d , breadth = %d \n", r1.length,r1.breadth);
	//calling by address 
	printer_func_by_address(&r1);
	printf("after call by address function is executed\nlength = %d , breadth = %d \n", r1.length,r1.breadth);

	cout<<function()<<endl;
	return 0;
}
