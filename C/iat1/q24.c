#include<stdio.h>

void insert(int arr[], int* size , int pos , int x){
	if (pos<0 || pos>*size){
		printf("Invalid posn\n");
		return;
	}

	for(int i = *size ; i>= pos ; i--){
		arr[i+1] = arr[i];
	}
	
	arr[pos] = x;

	(*size)++;
}

void delete(int arr[], int* size , int pos){
	//valadity check 
	if(pos<0 || pos >= *size){
		printf("Invalid posn\n");
		return;
	}
	for(int i = pos ; i < *size ; i++){
		arr[i] = arr[i+1];
	}

	(*size)--;
}

int main(){
	int arr[100] , size , pos , x;
	printf("Enter size of array\n");
	scanf("%d", &size);
	printf("Enter elements\n");
	for(int i = 0 ; i<size ; i++){
		scanf("%d", &arr[i]);
	}
	printf("pos\n");
	scanf("%d", &pos);
	printf("x\n");
	scanf("%d", &x);
}
