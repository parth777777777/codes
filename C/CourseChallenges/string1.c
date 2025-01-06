#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int length_of_string(const char sample[]);
void concatenate(char result[], const char str1[] , const char str2[]);
int check_if_same(const char str1[], const char str2[]);

int main(){

    const char a[] = "poop";
    const char b[] = "poop";
    printf("%d %d \n", length_of_string(a), length_of_string(b));
    char result[50];
    concatenate(result, a, b);
    printf("%s\n",result);

    printf("%d\n",check_if_same(a,b));

    
}

int length_of_string(const char sample[]){
    
    int count = 0;
    while(sample[count] != '\0'){
        ++count;
    }
    return count;
    
}

void concatenate(char result[], const char str1[] , const char str2[]){
    int i,j;
    for(i=0; str1[i]!= '\0';++i){
        result[i]= str1[i]; 
    } 
    for(j=0; str2[j]!= '\0';++j){
        result[i+j] =str2[j];
    }
    result[i+j] = '\0';
}

int check_if_same(const char str1[], const char str2[]){
    int l1= length_of_string(str1);
    int l2 = length_of_string(str2);
    if(l1 == l2){
        for(int i =0; i < l1; i++){
            if(str1[i]!=str2[i])
                return -1;
        }
        return 1;
    }
    else
        return -1;
} 