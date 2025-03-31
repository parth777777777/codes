#include <iostream>

int main(){

}

int get_length(){
	int length;
	std::cin>>length;
	if(length<=2 || length >= 100000){
		std::cerr<<"ERROR: out of bounds!";
		get_length();
	}
	else
		return length;
}

