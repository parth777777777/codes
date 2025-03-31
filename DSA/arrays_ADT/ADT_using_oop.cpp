#include <cmath>
#include<iostream>
#include <cstdio>
class ArrayADT{
private:
	int* arr;
	int size;
	int capacity;
	bool sorted;
	//int* temp = new int[5];
public:
	//constructor
	ArrayADT(int cap){
		size = 0 ;
		capacity = cap;
		arr = new int[capacity]();
		sorted = false;
	}
	//destructor
	~ArrayADT(){delete[] arr;}
	
	//display method:
	void display(){
		if(!size) std::cout<<"Array is empty!\n";
		else{
			std::cout<<"Array elements: ";
			for(int i = 0; i<size ;i++){
				std::cout<<arr[i]<<" ";
			}
		}
		std::cout<<"\n";
	}
	//add(x)/append(x):
	///time complexity : O(1)
	///space complexity : O(1)
	void add(int n){
		if(size>=capacity){
			std::cout<<"Array is full!"<<"\n";
			return;
		}
		else {
			arr[size++] = n;
			printf("Appended : %d\n",n);
		}
	}
	
	//time complexity: best case time = O(1) 
	//worst case time = O(n)
	void insert(int index , int n){
		if (index>=0 && index<size){
			if(size < capacity) {
				for(int i=0 ;i<=size-index; i++)
					arr[size-i] = arr[size-(i+1)];
				arr[index]=n;
				size++;
				printf("Inserted '%i' at index %d\n",n,index);
			}
			else std::cout<<"ERROR: Array full!"<<std::endl;
		}
		else std::cout<<"ERROR: Out of bounds!"<<std::endl;
	}
	
	//time complexity: best case time = O(1) 
	//worst case time = O(n)
	void Delete(int index){
		if(index>=0 && index <size ){
			for(int i = index ; i<size-1; i++)
				arr[i]= arr[i+1];
			arr[--size]= 0;
			std::cout<<"Deleted element at index :"<<index<<std::endl;
		}
		else std::cout<<"ERROR: Out of bounds!"<<std::endl;
	}

	//time complexity: best case time = O(1) 
	//worst case time = O(n)
	//average case time = (n+1)/2 = O(n)
	int linearSearch(int n){
		for(int i = 0 ; i<size ; i++){
			if (arr[i] == n) {
				printf("'%d' found at index %d\n",n,i);
				//for transposition : the element is moved 1 step ahead to lower time when finding it the next time 
				//swap(arr[i],arr[i-1]);
				//
				//Move to front : the element is thrown to the first index to get it in constant time when we search for it again:
				//swap(arr[i],arr[0]);
				return i;
			}
		}
		printf("'%d' not found in array!\n",n);
		return -1;
		}

	int binarySearch(int key){
		int low =0 ;
		int high = size-1;
		sorted = true;
		while(low<=high){
			if(sorted){
				int mid = std::floor((low+high)/2);
				if (key==arr[mid]) return mid;
				else if (key <arr[mid]) high = mid-1;
				else if (key >arr[mid]) low = mid+1;
				else return -1;
			}
			else return -1;//returns when array is not sorted 
		}
		return -1;//returns when element not found in array
	}

	int get(int index){
		if(index>=0 && index<size){
			return arr[index];
		}
		else {
			std::cout<<"ERROR: Out of bounds!\n";
			return -1;
		}
	}

	void set(int index, int n){
		if(index>=0 && index<size){
			arr[index]= n;
			std::cout<<"value set!\n";
		}
		else std::cout<<"ERROR: Out of bounds!\n";
	}

	void findMax(){
		int max=arr[0];
		for(int i=1 ; i<size ; i++)
			if(max< arr[i]) max = arr[i];
		printf("Biggest number is %d\n",max);
	}

	void findMin(){
		int min=arr[0];
		for(int i=1 ; i<size ; i++)
			if(min > arr[i]) min = arr[i];
		printf("Smallest number is %d\n",min);
	}

	int sum(){
		int sum=0;
		for(int i =0 ; i<size ;i++){
			sum += arr[i];
		}
		return sum;
	}
	//function overloading , sum of first n elements
	int sum(int n){
		int sum=0;
		if(n>=size){
			sum = ArrayADT::sum();
			std::cout<<"Out of bounds , returning sum of all elements: ";
			return sum;
		}
		for(int i =0 ; i<n ;i++)
			sum += arr[i];
		return sum;
	}
	double average(){
		double sum=0;
		for(int i =0 ; i<size ;i++){
			sum += arr[i];
		}
		return sum/size;
	}
	
	//n+n = 2n -> O(n)
	void reverse_wihtout_swap(){
		int temp[size];
		for(int i= size-1 ,j=0 ; i>=0 ; i--, j++)
			temp[j]= arr[i];
		for(int i=0 ; i<size ; i++)
			arr[i] = temp[i];
	}
	
	// n -> O(n)
	void reverse(){
		for(int i = size-1 , j=0 ; i>j; i--,j++)
			std::swap(arr[i],arr[j]);
	}

	void resize(int n){
		int* temp = new int[n];
		for(int i =  0 ; i<size ; i++ ) temp[i] = arr[i];
		delete[] arr;
		arr = temp;
		temp = NULL;
		std::cout<<"capacity increased\n";
	}
	bool isFull(){
		if (size==capacity) return true;
		else return false;
	}

	bool isEmpty(){
		if (size == 0) return true;
		else return false;
	}
	
	void right_shift(){
		if(isFull()){
			resize(capacity+1);
			//shifting code
		}
		else {
			//shifting code
		}
		size++;
		arr[0] =0;
	}
	//right_shift() , left_rotate(), right_rotate(), isFull() , isEmpty() , sort(), merge()
};

int main(){
	ArrayADT array1(20);
	array1.add(10);
	array1.add(12);
	array1.add(14);
	array1.add(15);
	array1.add(16);
	array1.add(20);
	array1.add(29);
	array1.add(37);
	array1.add(50);
	array1.linearSearch(29);
	array1.linearSearch(70);
	std::cout<<"found at :"<<array1.binarySearch(20)<<std::endl;
	std::cout<<"\n";
	std::cout<<array1.sum();
	std::cout<<"\n";
	std::cout<<array1.average();
	std::cout<<"\n";
	std::cout<<array1.sum(3);
	std::cout<<"\n";
	std::cout<<array1.sum(10);
	std::cout<<"\n";
	array1.display();
	array1.reverse();
	array1.display();
	array1.reverse();
	array1.display();
	array1.right_shift();
	array1.display();
	return 0;
}
