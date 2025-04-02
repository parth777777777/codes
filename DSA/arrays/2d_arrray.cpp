#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
	//three ways to create 2d arrays in c/cpp
	//1. normal declaration :
	int Arr1[3][4] = {{1,2,3,4},{2,3,4,5},{9,8,7,6}};
	//memory allocated is like a single dimension array but compilers allow us to interact with it like a 2d array with row and coloumn index .
	//memory created in stack.
	
	//2. array of pointers :
	int *Arr2[3] ;
	//this creates a arra[y to store 3 pointer varibles and each pointer variable will point to an array created in heap .
	Arr2[0] = new int[4];
	Arr2[1] = new int[4];
	Arr2[2] = new int[4];
	//we can access memory in this method in the same way as above 
	Arr2[0][3]  = 23; //this initializes the 2nd index of the array pointed by pointer in 0th index of Arr2 array with 23.
	//here the main array is in stack while the arrays created by new operator are in heap .
	
	//3. double pointer :
	//Everything is created in heap other than the double pointer declaration.
	//Creating a pointer varible that points to a pointer is called a double pointer variable.
	int **Arr3;
	//assign an array in heap for data type -int pointer.
	Arr3 = new int* [3];
	// assign arrays in heap of data type int to the pointers just created above .
	Arr3[0] = new int[4];
	Arr3[1] = new int[4];
	Arr3[2] = new int[4];

	//Accessing the elements in a 2d array is done by using 2 nested for loops:
	for (int i = 0 ; i <3 ; i++){
		for (int j =0 ; j<4 ; j++){
			printf("enter number at [%d][%d] : ",i,j);
			scanf("%d", &Arr3[i][j]);
		}
	}
	//printing 2d array:
	for (int i = 0 ; i <3 ; i++){
		for (int j =0 ; j<4 ; j++){
			printf("[%d][%d] = %d \n",i,j,Arr3[i][j]);
		}
	}
	return 0;
}

