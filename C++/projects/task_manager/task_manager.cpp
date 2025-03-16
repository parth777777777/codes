#include<iostream>
#include<fstream>
#include<nlohmann/json.hpp>
#include <sys/types.h>
#include <chrono>
#include<format>

int main(){
	//open tasks file using istream
	std::ifstream jsonFileStream("./tasks.json");
	//if file doesnt open , return with error
	if(!jsonFileStream){
		std::cerr << "Error: Could not open tasks.json"<<std::endl;
		return 1;
	}
	// if opens , create json variable named tasks which will hold the data from the tasks.json file
	nlohmann::json tasks;
	jsonFileStream>> tasks;

	//if tasks doesnt contain an array of elements(tasks) or is empty , create one 
	if(!tasks.is_array()){
		tasks = nlohmann::json::array();
	}

	std::cout<<"title: ";
	std::string description ;
	std::cin>>description;

	auto now = std::chrono::system_clock::now();
	std::string formatted_time = std::format("{:%Y-%m-%d %H:%M:%0.1S}", now);
	//code to add a task , currently its being added hardcoded, once i figure out how json file hanlding works with c++ ill move to getting user input
	nlohmann::json newTask = {
		{"id", tasks.empty() ? 1 : tasks.back()["id"].get<int>() + 1},
		{"description", description},
		{"status", "active"},
		{"createdAt", formatted_time},
		{"updatedAt",formatted_time}
	};

	//adds the task in tasks file
	tasks.push_back(newTask);

	//pretty prints the data 
	std::cout<<tasks.dump(4)<<std::endl;

	//outputs data back to main file (tasks.json)
	std::ofstream outFile("./tasks.json");
	outFile<<tasks.dump(4);
	outFile.close();

	std::cout<<"New task succesfully added"<<std::endl;

	return 0;
}
