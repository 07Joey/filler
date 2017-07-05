#include "../includes/filler.h"
#include <stdio.h>
char ** dummy_generategrid(t_point grid_dimen)
{
	int i = 0;
	int  j;;
	char **grid;
	grid = (char **) malloc(sizeof(char *) * grid_dimen.y);

	while(i < grid_dimen.y)
	{
		grid[i] = (char *) malloc(sizeof(char) * grid_dimen.x);
		j = 0;
		while(j < grid_dimen.x)
		{
			grid[i][j] = '.';
			j++;
		}
		i++;
	}
	grid[12][14] = 'X';
	grid[8][2] = '0';

	return grid;
}

t_gameinfo * dummy_get_struct()
{
	t_token newtoken;
	t_gameinfo *gameinfo;
	t_point grid_dimen;
	grid_dimen.x = 17;
	grid_dimen.y = 15;

	newtoken.y = 1;
	newtoken.x = 2;
	newtoken.piece = "**";

	gameinfo = (t_gameinfo*) ft_memalloc(sizeof(gameinfo) * 1);
	gameinfo->playerno = '0';
	gameinfo->grid_dimen = grid_dimen;
	gameinfo->newtoken = newtoken;

	gameinfo->grid = dummy_generategrid(grid_dimen);
	return (gameinfo);
}

void dummy_show_grid()
{
	int i = 0;
	int j = 0;
	t_gameinfo * gameinfo = dummy_get_struct();
	printf("Player : %c \n", gameinfo->playerno);

	while(i < 15)
	{
		j = 0;
		while (j < 17)
		{
			ft_putchar(gameinfo->grid[i][j]);
			j++;
		}

		ft_putchar('\n');
		i++;
	}

}
