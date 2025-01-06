#include<stdio.h>
#include<stdlib.h>

int main(){
    float data[5][12] = {
                        {1.4,2.4,4,5,7,5,1,4,6,9,4,5},
                        {8,4,4,5.5,4,5.8,2,4,6,4,4.5,7},
                        {3,8,4,5,9,1,1,4,3.4,7,7,4},
                        {8,4,4,5,4,5,1,4,6,9.8,4,5},
                        {8,4,6,1,3,5,5.4,2,4,6,4,4}
    };
    
    int year =2020;
    int i,j;
    
    
    printf("YEAR    RAINFALL\n");
    for(i=0;i<5;i++){
        float sum =0;
        printf("%d : ",year);
        for(j=0;j<12;j++){
            sum = sum+data[i][j];
        }
        year++;
        printf(" %0.1f",sum);
       
        printf("\n");
    }

    float total;
    int m,n;
    for(m=0;m<5;m++){
        for(n=0;n<12;n++){
            total += data[m][n];
        }
    }
    printf("\n");
    printf("Average over last 5 years is : %0.1f units\n",total/5);

    printf("\n");

    printf("MONTHLY AVERAGES : \n" );
    printf("\n");
    printf("JAN  FEB  MAR  APR  MAY  JUN  JUL  AUG  SEP  OCT  NOV  DEC\n");

    int x,y;
    for(x=0;x<12;x++){
        float TotalofMonthOverYears =0;
        for(y=0;y<5;y++){
            TotalofMonthOverYears = TotalofMonthOverYears +data[y][x];
        }
        printf("%0.1f  ",TotalofMonthOverYears/5);
    }

    return 0;
}