#include<stdio.h>
#include<stdlib.h>


//drawboard -- get input/check for invalid inputs  -- update board(drawboard) -- check for win 
//if win = false -- turn palyer 2 -- get input -- update board -- check for win.
int choice=0,player=0;

char square[10]={ 'o', '1', '2', '3', '4', '5', '6', '7', '8', '9' }; //1d array which corresponds to each square in 3x3 square
/*
    1 | 2 | 3  
  -------------
    4 | 5 | 6
  -------------
    7 | 8 | 9
*/

int checkForWin();
void displayBoard();
void markBoard(char mark);


int main()
{
    int gameStatus = 0;

    char mark = ' ';

    player = 1;

    do
    {
      displayBoard();

      // change turns
      player = (player % 2) ? 1 : 2;

      // get input
      printf("Player %d, enter a number: ", player);
      scanf("%d", &choice);

      // set the correct character based on player turn
      mark = (player == 1) ? 'X' : 'O';

      // set board based on user choice or invalid choice
      markBoard(mark);

      gameStatus = checkForWin();

      player++;
      system("clear");

    }while (gameStatus == -1);

    if (gameStatus == 1)
        printf("==>\aPlayer %d win ", --player);
    else
        printf("==>\aGame draw");

    return 0;
}
//Check for win:
// 1 -- game is won by either player 
// 0 -- game drawn
// -1 -- game in progress
int checkForWin(){
    int returnvalue=0;
    
    if(square[1]==square[2] && square[2] ==square[3])
        returnvalue =1;
    
    else if (square[4]==square[5] && square[5] ==square[6])
        returnvalue =1;
    
    else if (square[7]==square[8] && square[8] ==square[9])
        returnvalue =1;
    
    else if (square[1]==square[4] && square[4] ==square[7])
        returnvalue =1;

    else if (square[2]==square[5] && square[5] ==square[8])
        returnvalue =1;

    else if (square[3]==square[6] && square[6] ==square[9])
        returnvalue =1;

    else if (square[1]==square[5] && square[5] ==square[9])
        returnvalue =1;

    else if (square[3]==square[5] && square[5] ==square[7])
        returnvalue =1;

    else if (square[1] != '1' && square[2] != '2' && square[3] != '3' &&
        square[4] != '4' && square[5] != '5' && square[6] != '6' && square[7]!= '7' 
        && square[8] != '8' && square[9] != '9')
        returnvalue = 0;

    else
        returnvalue = -1; 
    
    return returnvalue;
    
}

//function that draws board:
void displayBoard(){
    
    printf("\n\nTic Tac Toe\n\n");
    printf("Player 1 (X) -- Player 2 (Y)\n\n");

    printf(" %c | %c | %c \n",square[1],square[2],square[3]);
    printf("-----------\n");
    printf(" %c | %c | %c \n",square[4],square[5],square[6]);
    printf("-----------\n");
    printf(" %c | %c | %c \n",square[7],square[8],square[9]); 
}

//Function that takes input and updates board :
void markBoard(char mark){
    if (choice == 1 && square[1]=='1')
        square[1]= mark;
    
    else if (choice == 2 && square[2]=='2')
        square[2]= mark;

    else if (choice == 3 && square[3]=='3')
        square[3]= mark;

    else if (choice == 4 && square[4]=='4')
        square[4]= mark;

    else if (choice == 5 && square[5]=='5')
        square[5]= mark;

    else if (choice == 6 && square[6]=='6')
        square[6]= mark;
    
    else if (choice == 7 && square[7]=='7')
        square[7]= mark;

    else if (choice == 8 && square[8]=='8')
        square[8]= mark;

    else if (choice == 9 && square[9]=='9')
        square[9]= mark;

    else{
        printf("!!!!INVALID MOVE!!!!");
        player--;
        getchar();

    }
        
}
