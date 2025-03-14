#include <iostream>
#include<vector>

int main(){
	std::vector<int> v1 = {1,2,3,4};
	std::cout<<v1.size()<<"\n";
	//capacity will be 4 = same as size 
	std::cout<<v1.capacity()<<"\n";
	v1.push_back(5);
	//added 1 more , and now capacity is at 8 instead of 5 , because capacity doubles when size is higher than prevous capacity 
	std::cout<<v1.capacity()<<"\n";
	v1.push_back(6);
	v1.push_back(7);
	v1.push_back(8);
	v1.push_back(9);
	//capacity doubles again to 16
	std::cout<<v1.capacity()<<"\n";
	//we remove one element 
	v1.pop_back();
	std::cout<<v1.capacity()<<"\n";
	//yet the capacity doesnt shrink , we need to manually call a shrink method 
	v1.shrink_to_fit();
	//now its shrinked to 8 .
	std::cout<<v1.capacity()<<"\n";

	std::cout<<"\n";
	//iterating through a vector 
	for(int i=0 ; i<v1.size() ; i++){
		std::cout<<v1[i]<<"\n";
	}
	//insert at index 0 
	v1.insert(v1.begin() , 0);
	//insert at index 3
	v1.insert(v1.begin()+ 3 , 10);
	//erase from certain index
	v1.erase(v1.begin()+8);

	std::cout<<"\n";
	//iterating through a vector 
	for(int i=0 ; i<v1.size() ; i++){
		std::cout<<v1[i]<<"\n";
	}
}
