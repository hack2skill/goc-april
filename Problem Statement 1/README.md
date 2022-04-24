# Problem Statement-1


***
### Question

Anuj and Avni take turns playing a game, with Anuj starting first.

Initially, there is a number n on the chalkboard. On each player's turn, that player makes a move consisting of:

Choosing any x with 0 < x < n and n % x == 0.
Replacing the number n on the chalkboard with n - x.
Also, if a player cannot make a move, they lose the game.

Return true if and only if Anuj wins the game, assuming both players play optimally.

Example 1: 
Input: n = 2
Output: true
Explanation: Anuj chooses 1, and Avni has no more moves.

Example 2: 
Input: n = 3
Output: false
Explanation: Anuj chooses 1, Avni chooses 1, and Anuj has no more moves.

Constraints:

1 <= n <= 1000
***
