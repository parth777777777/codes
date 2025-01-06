#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int main(){
	int array[10];
	for (int i=0 ; i <10 ; i++){
		scanf("%d",&array[i]);
	}
	int largest = *array;
	int smallest = *array;
	int sum = 0;
	float average = 0 ;
	for (int i = 1 ; i<10 ; i++){
		if (largest < *(array+i)){
			largest = *(array+i);
		}
		if (smallest > *(array+i)){
			smallest = *(array+i);
		}
		sum += *(array+i);
		average = sum/10;

	}
	printf("the largest number is : %d\n",largest);
	printf("the smallest number is : %d\n", smallest);
	printf("sum of all numbers is : %d\n", sum);
	printf("the average of all numbers is : %f\n", average);
	return 0;
}
