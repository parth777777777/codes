#include<iostream>
using namespace std;

struct rectangle
{
	int length;
	int breadth;
};

void init(struct rectangle *r , int l , int b)
{
	r->length=l;
	r->breadth=b;
}
void change_length(struct rectangle *r, int l)
{
	r->length = l;
}
void area(struct rectangle r)
{
	int area = (r.length)*(r.breadth);
	cout<<area<<endl;
}

int main(){
	rectangle r1;
	init(&r1,10,10);
	area(r1);
	change_length(&r1,12);
	area(r1);
	return 0;
}




