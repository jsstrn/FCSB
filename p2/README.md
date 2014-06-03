# Rock Paper Scissors
#### Version 2.0
#### Developed by Faisal, Hafiz, and Jesstern
---
## Roles 
The **Computer** class is derived from the Player class and when it makes a move will use a pseudo random number generator to generate a number between 1 and 3. The number represents the options rock, paper, and scissors, respectively. 

The **Human** class is also derived from the Player class. It will prompt the user to input a number between 1 and 3. Error handling is put in place to catch any faulty input from the user. 

The **Referee** class is a standalone class. It's role is to compare the two inputs from the players and decide who has won. It also keeps score of the game. 

## Algorithm 
We assigned a numeric number to each choice rock, paper, and scissors, as follows:
- [1] Rock
- [2] Paper
- [3] Scissors

The combinations can be seen here:
- Both parties draw when they choose the same number.
- Player 1 wins when
-- 1 vs 3
-- 2 vs 1
-- 3 vs 2
- Player 2 wins when
-- 3 vs 1
-- 1 vs 2
-- 2 vs 3

We can therefore express the rules of the game mathematically:
- P1 == P2, always ends as a draw.
- (P1 + 2) == P2, always ends as a win for Player 1. 
- (P1 - 1) == P2, also always ends as a win for Player 1. 
- All other combinations always end as a lose for Player 1. 

This, of course, fits nicely in an if-else statement.

    if (P1 == P2) {
        // Result is a draw
    } else if (P1 + 2 == P2 || P1 -1 == P2 ) {
        // Player 1 wins
    } else {
        // Player 2 wins
    }

## Program structure
- Player
-- name : string
-- Player(name : string)
-- getName() : string
-- setName(string) : void 
-- *virtual* makeMove() : int

- Computer
-- Computer(string) : public Player(string)
-- *virtual* makeMove() : int

- Human
-- Human(string) : public Player(string)
-- *virtual* makeMove() : int

- Referee
-- p1_score : int
-- p2_score : int
-- Referee() 
-- getP1Score() : int
-- getP2Score() : int
-- judge() : int

---
