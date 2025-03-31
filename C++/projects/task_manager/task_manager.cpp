#include <ctime>
#include <iomanip>
#include<iostream>
#include<fstream>
#include<nlohmann/json.hpp>
#include <sys/types.h>
#include <chrono>
// TODO: : ADD A ID RESETTER TO RESET IDs WHEN WE DELETED AN OBJECT 
// TODO: : FUNCTION TO SET STATUS 
// TODO: : FUNCTION TO UPDATE TASK DESCRIPTION 
// TODO: : FUNCTION TO LIST TASKS - 1. ALL TASKS , 2. LISTING BASED ON STATUS :
std::string formatTime(std::chrono::system_clock::time_point tp){
	//converting to time_t
	std::time_t tt= std::chrono::system_clock::to_time_t(tp);
	//converting to local time structure 
	std::tm tm = *std::localtime(&tt);
	//format as string
	std::ostringstream oss;
	oss << std::put_time(&tm, "%Y-%m-%d %H:%M:%S");
	return oss.str();
}

void set_status(nlohmann::json *tasks, int index){
	int input;
	std::cout<<"set :\n1.Active\n2.To-do\n3.completed\n: ";
	std::cin>>input;
	switch(input) {
		case 1:
			(*tasks)[index-1]["status"] = "Active";
		case 2:
			(*tasks)[index-1]["status"] = "To-do";
		case 3:
			(*tasks)[index-1]["status"] = "Completed";
	}
	//pretty prints the data
	std::cout<<(*tasks).dump(4)<<std::endl;

	//outputs data back to main file (tasks.json)
	std::ofstream outFile("./tasks.json");
	outFile<<(*tasks).dump(4);
	outFile.close();
	std::cout<<"Status set!"<<std::endl;
}

void list_tasks(nlohmann::json *tasks){
	//print task list with id values
	for(auto it = (*tasks).begin() ; it != (*tasks).end(); it++){
		std::cout<<(*it)["id"]<<" : "<<(*it)["description"]<<"\n";
	}
}

void reset_id(nlohmann::json *tasks){
	int i = 1;
	for(auto it = (*tasks).begin(); it != (*tasks).end() ; ++it){
		(*it)["id"] = i++;
	}
}

void add_task(nlohmann::json *tasks){
	std::cout<<"Description : ";
	std::string description ;
	std::cin>>description;

	auto now = std::chrono::system_clock::now();
	//need to convert this time point into a string becasue json constructor doesnt accept this data type
	auto formatted_time = formatTime(now);
	//code to add a task , currently its being added hardcoded, once i figure out how json file hanlding works with c++ ill move to getting user input
	nlohmann::json newTask = { {"id", (*tasks).empty() ? 1 : (*tasks).back()["id"].get<int>() + 1},
		{"description", description},
		{"status", "active"},
		{"createdAt", formatted_time},
		{"updatedAt", formatted_time}
	};

	//adds the task in tasks file
	(*tasks).push_back(newTask);
	
	//pretty prints the data
	std::cout<<(*tasks).dump(4)<<std::endl;

	//outputs data back to main file (tasks.json)
	std::ofstream outFile("./tasks.json");
	outFile<<(*tasks).dump(4);
	outFile.close();
	std::cout<<"New task succesfully added!"<<std::endl;
}

void delete_task(nlohmann::json *tasks){
	std::cout<<"Which task do you want to delete?\n";
	list_tasks(tasks);
	//deleting an element by checking the "id" value.
	int index;
	std::cout<<"Enter index : ";
	std::cin>>index;
	bool target_found = false;
	for(auto it = (*tasks).begin() ; it != (*tasks).end(); ++it){
		if ( (*it)["id"] == index){
			target_found = true;
			(*tasks).erase(it);
			//reset the ID numbering disrupted by deletion of an element.
			reset_id(tasks);
			//pretty prints the data
			std::cout<<(*tasks).dump(4)<<std::endl;
			//outputs data back to main file (tasks.json)
			std::ofstream outFile("./tasks.json", std::ios::trunc);
			if(outFile.is_open()){
				outFile<<(*tasks).dump(4);
				outFile.close();
				std::cout<<"Succesfully deleted!"<<std::endl;
			}
			else {
				std::cerr<< "Error : Could not open outFile for writing"<<std::endl;
			}
			//break out of loop
			break;
		}
	}
	if(!target_found) {
		std::cerr<<"Error: Provided index is out of bounds!"<<std::endl;
	}
}

int main(){
	//open tasks file using istream
	std::ifstream jsonFileStream("./tasks.json");
	//if file doesnt open , return with error
	if(!jsonFileStream){
		std::cout<<"File not found. Creating 'tasks.json'...\n";
		//create new file
		std::ofstream createFile("./tasks.json");
		createFile << "{}"; //initialize with an empty json object

		//reopen file using existing jsonFileStream object
		jsonFileStream.open("./tasks.json");
		if (!jsonFileStream) {
		    std::cerr << "Error: Failed to open 'tasks.json' after creation.\n";
		    return 1;  // Exit with error
		}
	}
	std::cout<<"'tasks.json' is now open and ready to use \n";

	// if opens , create json variable named tasks which will hold the data from the tasks.json file
	nlohmann::json tasks;
	jsonFileStream>> tasks;

	//if tasks doesnt contain an array of elements(tasks) , create one 
	if(!tasks.is_array()){
		tasks = nlohmann::json::array();
	}

	add_task(&tasks);
	add_task(&tasks);
	set_status(&tasks, 1);
	return 0;
}

