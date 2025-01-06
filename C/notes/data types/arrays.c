#include<stdlib.h>
#include<stdio.h>
int main (){
    //Arrays are used to store multiple values in a single variable
    int Mynumbers[]= {1,4,51,12,45,33}; //array with integer values stored
    printf("The second value in my number list is : %d\n",Mynumbers[1]); //[1] is the index for second number , outputs 4.
    //changing the value of a certain element in an array:
    Mynumbers[3] = 99; //this will change value at index 3 to 99 from its previous value 12 .
    //we can set array size :
    int Newlist[4]; //During initailization , [4] doesnt refer to the index but rather max values the array can hold.
    Newlist[0] = 77;
    Newlist[1] = 33;
    Newlist[2] = 66;
    Newlist[3] = 55; //last acceptabele index in array

    //for loop to show every value in an array:
    for(int i=0; i<6 ; i++){
        printf("Value at index %d  is : %d\n",i,Mynumbers[i]);
    }
    ClassGrades();
    return 0;
}
//Loop using array to store grades of a school class index wise
int ClassGrades() {
    int grades[4];
    int count =4;
    for(int i=0; i<=count ; ++i){
        printf("Roll no : %d enter Grade : ",i+1);
        scanf("%d",&grades[i]);
    }
    //loop to show elements 
    for(int j=0; j<5 ; j++){
        printf("Value at index %d  is : %d\n",j,grades[j]);
    }

    //variable length arrays
    int m;
    int VLA[m]; //m is >0

    return 0;
}