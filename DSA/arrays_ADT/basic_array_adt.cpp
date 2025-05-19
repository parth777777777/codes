#include<iostream>
#include<stdio.h>
using namespace std;

struct Array {
	int *A;
	int size;
	int length;
} arr;

void display(struct Array array){
	for(int i =0 ; i<arr.length ; i++){
		cout<<i<<"'th element is : ";
		cout<<arr.A[i]<<endl;
	}
}

int main(){
	printf("Enter size of an array :");
	scanf("%d",&arr.size);
	arr.A = new int[arr.size];
	arr.length = 0;

	printf("Enter number of elements : ");
	scanf("%d", &arr.length);

	printf("Enter all elements :\n ");
	for(int i = 0 ; i<arr.length ; i++){
		scanf("%d",&arr.A[i]);
	}
	display(arr);
}
