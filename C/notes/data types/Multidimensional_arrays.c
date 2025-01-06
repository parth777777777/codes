#include<stdio.h>
#include<stdlib.h>

int main(){
    //two dimensional array:
    int matrix[3/*rows*/][4/*coloums*/] = { {1,4,6,2},{5,7,12,14},{9,3,6,71}  };//3x4 matrix . 
    //accesesing an element:
    printf("the number is row 3 and column 2 is: %d\n",matrix[2][1]); //input the index in square brackets | Outputs 3.
    
    //Looping through an array:
    int i,j;
    for(i=0;i<3;i++){
        printf("ROW %d: ",i+1);
        for(j=0;j<4;j++){
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }

    //3D arrays , rarely used:
    int box[3][3][3] = { {{1,1,4} , {5,7,2} , {9,3,6}},
                         {{1,7,6} , {1,7,1} , {4,3,6}},
                         {{1,4,6} , {5,7,1} , {9,3,6}}
                        };
    return 0;
}