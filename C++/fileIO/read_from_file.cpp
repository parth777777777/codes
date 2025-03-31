#include<iostream>
#include<fstream>
#include<string>

int main(){
	std::fstream myFile;
	myFile.open("test.txt", std::ios::in);
	if(myFile.is_open()){
		std::string line;
		while(getline(myFile, line)){
			std::cout<<line<<"\n";
		}
		myFile.close();
	}
}
