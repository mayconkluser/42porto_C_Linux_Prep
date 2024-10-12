
# Exercise 08 : As dez damas

This repository contains functions to solve the Ten Queens Puzzle using recursion and backtracking. The puzzle involves placing ten queens on a 10x10 chessboard in such a way that no two queens threaten each other.

## Function Overview

1. **Solution Printer - ft_put_solution(int *queens)**
   - The `ft_put_solution` function prints one valid configuration of queen positions on the chessboard.

2. **Safety Checker - is_safe(int *queens, int col, int row)**
   - The `is_safe` function checks if a queen can be safely placed in a specific position on the board without being attacked.

3. **Solver - solve(int *queens, int col, int *count)**
   - The `solve` function uses recursion to place queens on the board column by column, ensuring no conflicts.

4. **Puzzle Solver Wrapper - ft_ten_queens_puzzle(void)**
   - The `ft_ten_queens_puzzle` function initializes the board and starts the solution search. It returns the total number of valid configurations.

## Function Prototypes

```c
void ft_put_solution(int *queens);
int is_safe(int *queens, int col, int row);
void solve(int *queens, int col, int *count);
int ft_ten_queens_puzzle(void);
```

### Parameters
- **queens**: An integer array representing the positions of the queens on the board.
- **col**: The current column where a queen is to be placed.
- **row**: The row to be checked for safety in the current column.
- **count**: A pointer to an integer tracking the number of valid configurations.

### Return Values
- `is_safe` returns 1 if the queen can be safely placed in the specified position, otherwise it returns 0.
- `ft_ten_queens_puzzle` returns the total number of valid configurations.

## Code Explanation

1. **Solution Printer - ft_put_solution**
   - Constructs a string where each element represents a row position of a queen in consecutive columns, ending with a newline character.
   - The solution string is printed using the `write` function.

2. **Safety Checker - is_safe**
   - Checks if the queen can be placed in the given row and column without conflicts.
   - Ensures no queens are in the same row or along either diagonal.

3. **Solver - solve**
   - Recursively attempts to place a queen in each row of the current column.
   - Calls `is_safe` to validate each row position.
   - If a valid configuration is found, it calls `ft_put_solution` to print it and increments the count.

4. **Puzzle Solver Wrapper - ft_ten_queens_puzzle**
   - Initializes the `queens` array and calls `solve` to begin finding configurations.
   - Returns the number of unique solutions.

## Example of Execution

For a 10x10 board:
- The `ft_put_solution` function will print each valid configuration in a format where each digit represents the row position of a queen in consecutive columns.
- Example output format:
  ```text
  0257948136
  0258693147
  ...
  4605713829
  9742051863
  ```

## Full Code

```c
void ft_put_solution(int *queens) {
    char solution[11];
    int i = 0;
    while (i < 10) {
        solution[i] = queens[i] + 48;
        i++;
    }
    solution[10] = '\n';
    write(1, solution, 11);
}

int is_safe(int *queens, int col, int row) {
    int i = 0;
    while (i < col) {
        if (queens[i] == row || col - i == row - queens[i] || col - i == queens[i] - row)
            return (0);
        i++;
    }
    return (1);
}

void solve(int *queens, int col, int *count) {
    int row = 0;
    if (col == 10) {
        (*count)++;
        ft_put_solution(queens);
        return;
    }
    while (row < 10) {
        if (is_safe(queens, col, row)) {
            queens[col] = row;
            solve(queens, col + 1, count);
        }
        row++;
    }
}

int ft_ten_queens_puzzle(void) {
    int queens[10];
    int count = 0;
    solve(queens, 0, &count);
    return (count);
}
```

## Conclusion

These functions work together to solve the Ten Queens Puzzle efficiently. The recursive `solve` function iterates through each row for a given column, checking for conflicts and printing each valid configuration. By limiting checks to rows and diagonals, the functions achieve optimal placements for all ten queens.
