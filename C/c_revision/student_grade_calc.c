#include<stdio.h>
#include<stdlib.h>

int main(){
	int n , outof;
	printf("Class strength: ");
	scanf("%d",&n);
	printf("Total marks for each subject : ");
	scanf("%d", &outof);
	system("clear");
	//Allocate memory for rows 
	float **result = malloc(n * sizeof(float *));
	for (int i = 0 ; i<n; i++){
		result[i] = malloc(4 * sizeof(float));
		result[i][3] = 0;
	}

	//Input marks 
	for(int i = 0; i<n; i++){
		for(int j = 0 ; j<3 ; j++){
			printf("enter marks of seat number %d in subject %d : " , i+1 , j+1 );
			scanf("%f", &result[i][j]);
			system("clear");
			result[i][3]+= ((result[i][j]/outof)*100)/3;
		}
	}

	//print marks
	int i, j;
	printf("\nResults:\n");
	for (i = 0; i < n; i++) {
		printf("Seat No. %d:\n", i+1);
		for (j = 0; j < 3; j++) {
			printf("  Subject %d:  Marks = %0.2f \n", j+1, result[i][j]);
		}
		printf("Percentage = %0.2f\n\n", result[i][3]);
	}

	for (int i = 0 ; i<n ; i++){
		free(result[i]);
	}
	free(result);
	return 0;
}
