#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int guess;
    time_t t;
    srand((unsigned)time(&t));
    int RandomNumber= rand()%21;
    
    for(int i=5 ;i>0;--i){
        printf("You have %d try(s) left\n""Guess RandomNumber between 0-20 : ",i);

        scanf("%d",&guess);
        if(guess>20 || guess < 0){
            printf("Invalid guess\n");
        }
        else if (abs(RandomNumber-guess)>=7)
        {
            printf("COLD\n");
        }
        else if (abs(RandomNumber-guess)<7 && abs(RandomNumber-guess)>=4)
        {
            printf("WARM\n");
        }
        else if (abs(RandomNumber-guess)<4 && abs(RandomNumber-guess)>=1){
            printf("HOT\n");
        }
        else{
            printf("YOU WON!!The number was %d\n",RandomNumber);
        }
    
    }
    printf("WOMP WOMP YOU LOST");
    return 0;
}