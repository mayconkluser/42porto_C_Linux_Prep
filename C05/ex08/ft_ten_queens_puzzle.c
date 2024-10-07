#include <unistd.h>
#include <stdio.h>

void	ft_put_solution(int *queens)
{
	char	solution[11];
	int		i;

	i = 0;
	while (i < 10)
	{
		solution[i] = queens[i] + 48;
		i++;
	}
	solution[10] = '\n';
	write(1, solution, 11);
}

int	is_safe(int *queens, int col, int row)
{
	int	i;

	i = 0;
	while (i < col)
	{
		if (queens[i] == row || col - i == row - queens[i]
			|| col - i == queens[i] - row)
			return (0);
		i++;
	}
	return (1);
}

void	solve(int *queens, int col, int *count)
{
	int	row;

	if (col == 10)
	{
		(*count)++;
		ft_put_solution(queens);
		return ;
	}
	row = 0;
	while (row < 10)
	{
		if (is_safe(queens, col, row))
		{
			queens[col] = row;
			solve(queens, col + 1, count);
		}
		row++;
	}
}

int	ft_ten_queens_puzzle(void)
{
	int	queens[10];
	int	count = 0;
	
	solve(queens, 0, &count);
	return (count);
}

/*
int	main(int argc, char **argv)
{
	int	count;

	if (argc > 1 && argv[1][0] == '-' && argv[1][1] == '-' && argv[1][2] == 'p')
		count = ft_ten_queens_puzzle();
	else
	{
		count = ft_ten_queens_puzzle();
		printf("All solutions: %d\n", count);
	}
	return (0);
}
 */
