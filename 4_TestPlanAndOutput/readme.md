
# TEST PLAN:
## Table no: High level test plan
|Test id |description|Exp I/P |Exp O/P|
|--------|-----------|--------|-------|
|H_01 |Check if the graph for playing is being drawn or not|No input |3X3 graph is drawn |
|  |  |  |  |
|H_02 |Check if player got 3 of his inputs in vertical, horizontal or diagonal format |'X' or 'O' input from  the user.|The user won the game.|
|  |  |  |  |
|H_03 |Check for draw |9 inputs from both the users |The game is over.|

## Table no: Low level test plan
|Test id |description|Exp I/P |Exp O/P|
|--------|-----------|--------|-------|
|L_01 |Checking for the basic requirement to the game, i.e., a 3X3 graph is drawn or not.|Not the input expected from the user. |3X3 graph is drawn |
|  |  |  |  |
|L_02 |Play proceeds with the user/computer alternately placing their marks in any unoccupied cell. Check if any player finishes with 3 marks in a row(vertical, horizontal or diagonal).|'X' or 'O' input from the users.|The user won the game.|
|  |  |  |  |
|L_03 |Check if a total of 9 moves have been made combining that of both the users , the game ends up in a draw when neither of the user is able to get 3 marks in a row (vertical, horizontal or diagonal). |9 inputs from the users |The game is over. Somebody won or the game ended as a draw.|
