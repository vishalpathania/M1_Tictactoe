# M1_Tictactoe
Tic-Tac-Toe game is very popular and is fairly simple by itself. It is a computer based game for two players X and O. They take turns marking the spaces in the 3 x 3 grid with X and O alternatively. The player who succeeds in placing three successive marks either in horizontal, diagonal or vertical wins the game.

## Explanation
The game starts giving you three input options(1, 2, 3):
1 means you play using 'X'.
2 means you play using 'O'.
3 means you exit the game.
The game ends when:
It is in a draw situation , i.e, a total of 9 moves have been completed and novody has won.
You win.
The computer wins.
The game continues in the beginning if the check for draw is false.
Then it checks if anyone has won yet.
If not, then it again checks if it is a draw situation.

# 4W's and 1'H
## Who:
Anyone can play this game.
Also, businesses can use it.
## What:
This game is for recreational purposes.
Businesses can also use is for development of strategies as there are many possible outcomes in this game.
## When:
This game can be played whenever you are feeling bored or want to figure out ways, outcomes and situations of this game.
## Where:
A variety of websites make a simple tic tac toe game available.
Also used in businesses and organizations.
## How:
It can be implemented in a business strategy to help improve it. Business strategy is about moving swiftly and getting an advantageous position. In Tic-Tac-Toe, this is pretty straight forward: The first mover can choose the best position. In business, it is a bit more complicated. Even if business strategy is more complex, the principle is the same: Move swiftly when the time comes, go for an advantageous position.
# Detail requirements
## High Level Requirements:
|ID |Description |
|---|---|
|HR01 |User shall be able to choose 'X' to play|
|||
|HR02 |User shall be able to choose 'O' to play|
|||
|HR03 |User shall be able to Exit the game|
|||
|HR04 |User shall lose|
|||
|HR05 |User shall win|
|||
|HR06 |User shall end up in a Draw situation|
|||
# Low level Requirements:
|ID |Description |HLR ID |
|---|---|---|
|LR01 |If the user presses '1', he'll be play with 'X'|HR01 |
||||
|LR02 |If the user is playing with 'X', he'll get the first turn|HR01 |
||||
|LR03 |If the user presses '2', he'll be play with 'O'|HR02 |
||||
|LR04	 |If the user is playing with 'O', he'll get the second turn|HR02 |
||||
|LR05 |If the user presses '3', it'll exit the game|HR03 |
||||
|LR06 |If the computer gets 3 Xs or 3 Os in vertical,horizontal or diagonal row, User will lose |HR04 |
||||
|LR07 |If the user gets 3 Xs or 3 Os(as per his choice), in vertical,horizontal or diagonal row, he'll win.|HR05 |
||||
|LR08 |If the total number of moves, i.e., 9 moves have been completed and neithe the user nor the computer has won, it'll end up in a draw. |HR06 |
||||
