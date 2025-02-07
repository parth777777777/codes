#include<iostream>
using namespace std;

class rectangle
{
private:
	int length;
	int breadth;
public:
	rectangle(int l, int b){  //constructor (comparable to init function from other program)
		length=l;
		breadth=b;
	}
	void area(){
		cout<<length*breadth<<endl;
	}
	void change_length(int l){
		length=l;
	}
};

int main(){
	rectangle r1(10,15); //creates an object using constructor and initialize it 
	r1.area(); //class methods on thus created object
	r1.change_length(20);
	r1.area();
	return 0;
}

