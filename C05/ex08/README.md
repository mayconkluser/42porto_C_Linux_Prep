
# ft_ten_queens_puzzle

## Overview
This project implements a solution to the "ten queens puzzle," where ten queens must be placed on a 10x10 chessboard such that no two queens can attack each other. The solution is generated using recursive backtracking and the function displays all valid configurations.

## Function Descriptions

### `void ft_put_solution(int *queens)`
This function outputs a single solution of the queens' positions on the board.

- **Parameters**:
  - `int *queens`: An array representing the row positions of each queen in each column.
  
- **Details**:
  - It constructs a solution string from the `queens` array where each integer is converted to a character.
  - Each solution string is terminated by a newline character and printed.

### `int is_safe(int *queens, int col, int row)`
This helper function checks if a queen can be safely placed in a given row and column.

- **Parameters**:
  - `int *queens`: Array containing current queen placements.
  - `int col`: The column being checked.
  - `int row`: The row being checked.
  
- **Returns**:
  - `1` if the position is safe, `0` otherwise.

- **Details**:
  - Checks for conflicts in the same row, and along the main and secondary diagonals.

### `void solve(int *queens, int col, int *count)`
This recursive function places queens on the board by iterating through each row in a given column and attempting a safe placement.

- **Parameters**:
  - `int *queens`: Array representing the board.
  - `int col`: Current column for placing a queen.
  - `int *count`: Counter to track the number of valid solutions.
  
- **Details**:
  - For each valid configuration found, it increments the solution count and calls `ft_put_solution` to print the arrangement.
  - Calls itself recursively to attempt placement in subsequent columns until all 10 queens are placed.

### `int ft_ten_queens_puzzle(void)`
This main function initializes the board and starts the recursive solution search.

- **Returns**:
  - The total count of valid solutions.

## Compilation and Execution

Compile with:
```bash
gcc -Wall -Wextra -Werror ft_ten_queens_puzzle.c -o ten_queens
```

To display solutions:
```bash
./ten_queens | cat -e
```

To count only:
```bash
./ten_queens
```

## Example Output
```text
0257948136$
0258693147$
...
4605713829$
9742051863$
```
