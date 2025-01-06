import os
import time 
from colorama import Fore, Style
#initializing the game board
game= ['1','2','3','4','5','6','7','8','9']
entries = [Fore.RED+ 'X'+Style.RESET_ALL, Fore.GREEN+'O'+Style.RESET_ALL]
#function to draw board 
def draw_board():
    os.system('clear')
    #if youre on different OS 'clear' might not work idk, but uncomment the line of code below if it doesnt work
    #os.system('cls')
    print("========= Tic-Tac-Toe =========")
    print()
    print(f"           {game[0]} | {game[1]} | {game[2]}   ")
    print("          ---|---|---")
    print(f"           {game[3]} | {game[4]} | {game[5]}   ")
    print("          ---|---|---")
    print(f"           {game[6]} | {game[7]} | {game[8]}   ")
    print()
    print("===============================")
    print()

#function to update board 
def mark_board(choice, mark):
    if game[choice - 1] not in entries:
        if mark == 'X':
            game[choice - 1] = Fore.RED + 'X' + Style.RESET_ALL  # Red color for 'X'
            time.sleep(0.5)
        else:
            game[choice - 1] = Fore.GREEN + 'O' + Style.RESET_ALL  # Green color for 'O'
            time.sleep(0.5)
    else:
        print("\n!! INVALID MOVE !!")
        time.sleep(1.2)

#function that controls game loop 
def check_for_win():
    win_conditions= [
        [0,1,2],
        [3,4,5],
        [6,7,8],
        [0,3,6],
        [1,4,7],
        [2,5,8],
        [0,4,8],
        [6,4,2]
    ]
    
    for condition in win_conditions:
        if (game[condition[0]] == game[condition[1]] == game[condition[2]] ) and ( game[condition[0]] in entries ):
            return 1 #player won
        
    if all(spot in entries for spot in game):
        return  0 #game draw
    
    else:
        return -1 #game continues

# game loop 
player = 1 
game_status = -1 

while game_status == -1:
    
    draw_board()
    player = 1-player #logic to handle player turns 
    
    valid_move= False
    #loop to get valid input
    while not valid_move: 
        try:
            choice = int(input(f"Player {player} ({'X' if player == 0 else 'O'}) make your move (0-9) : "))
            if choice not in range(1,10):
                print("Invalid input , Enter a number between 1-9. ")

            elif game[choice-1] in ['X','O']:
                print("spot already taken , try another move")
            else:
                valid_move= True
                
        except ValueError:
            print("Invalid input , Enter a number between 1-9. ")
    
    mark_board(choice, 'X' if player == 0 else 'O')
    game_status = check_for_win()

draw_board()
if game_status== 1:
    print(f"{'-'*32}")
    print(f"       Player {player + 1} ({'X' if player == 0 else 'O'}) wins!!")
    print(f"{'-'*32}\n")
else:
    print("Game draw!!")
    