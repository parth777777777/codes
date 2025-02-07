#include<iostream>
using namespace std;

class square{
private:
	int side_length ;
public:
	square(int l){
		side_length=l;
	}
	void perimeter(){
		cout<<4*side_length<<endl;
	}
	void area(){
		cout<<side_length*side_length<<endl;
	}
};

int main(){
	square sq1(10);
	square sq2(12);
	sq1.perimeter();
	sq1.area();
	sq2.perimeter();
	sq2.area();
	return 0;
}
