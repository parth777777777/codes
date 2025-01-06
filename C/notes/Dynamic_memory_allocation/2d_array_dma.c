#include<stdio.h>
#include<stdlib.h>

int main (){
    int rows,columns; 
    printf("enter rows of desired matrix : ");
    scanf("%d",&rows);
    printf("enter columns of desired matrix : ");
    scanf("%d",&columns);

    //initialize matrix using DMA
    int **matrix = (int **)calloc(rows, sizeof(int *));
    for(int i =0; i< rows; i++){
        matrix[i] =(int *)calloc(columns, sizeof(int));
    }

    //Take input for matrix 
    for(int i= 0; i<rows; i++){
        for(int j = 0; j<columns ; j++){
            printf("Enter matrix[%d][%d] : ",i,j);
            scanf("%d",&matrix[i][j]);
        } 
    }
    //clears terminal
    system("clear");

    //Print matrix
    for(int i= 0; i<rows; i++)
        for(int j = 0; j<columns ; j++)
            printf("matrix[%d][%d]  = %d\n",i,j,matrix[i][j]);

    //free memory
    for(int i = 0 ; i<rows ; i++)
        free(matrix[i]);
    free(matrix);

    return 0;
}

