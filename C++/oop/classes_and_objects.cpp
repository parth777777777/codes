#include <cstdio>
#include <iostream>
#include <string>
//OOP way: this way we can make multiple person profiles as instaces of class person
class person{
public:
	std::string first;
	std::string middle;
	std::string last;
	int age;

	void fullname (){
		std::cout<<first<<" "<<middle<<" "<<last<<std::endl;
	}
	bool isAdult(){
		if(age>=18) return true;
		else return false;
	}
};

//functional way
void fullname(std::string first,std::string middle, std::string last ){
	std::cout<<first<<" "<<middle<<" "<<last<<std::endl;
}
int main(){
	std::string first = "parth";
	std::string middle = "the";
	std::string last = "fart";

	fullname(first,middle,last);

	person a;
	a.first ="parth";
	a.middle="the";
	a.last="fart";
	a.age = 10;
	a.fullname();
	a.isAdult();
	if (a.isAdult()) std::cout<<"hurray\n";
	else std::cout<<"womp womp\n";

	person b;
	b.first ="meow";
	b.middle="the";
	b.last="cat";
	b.age = 20;
	b.fullname();
	if (b.isAdult()) std::cout<<"hurray\n";
	else std::cout<<"womp womp\n";
	

}
