#include<iostream>
#include<fstream>

int main(){
	std::fstream myFile; // create a variable of type fstream which will allow us to interact with files
	
	myFile.open("test.txt",std::ios::out); //open method takes in two paramaters , first is the name of the file to open , second is if we want to read or write the file 
	//std::ios::out means we are outputting from terminal to the file , i.e writing the file . 
	if (myFile.is_open()){
		myFile<<"Hello\n";
		myFile<<"Meow heavy\n";
		myFile.close();
	}

	// once we close this file and then try to write agian , we have to append to the file or else the data is overwritten 
	myFile.open("test.txt",std::ios::app); //append

	if(myFile.is_open()){
		myFile<<"appended text\n";
		myFile.close();
	}
}
