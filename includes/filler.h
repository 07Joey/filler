#ifndef FILLER_H
#define FILLER_H
#define STDOUT_FD 1
#include "../libft/libft.h"

typedef struct s_point
{
	int x;
	int y;
}			t_point;

typedef struct s_token
{
	int x;
	int y;
	char *piece;
}			t_token;

typedef struct s_gameinfo
{
	char playerno;
	char **grid;
	t_point grid_dimen;
	t_point *av_spots;
	t_token newtoken;
	t_point *prev_token_points;

}				t_gameinfo;

void process_map(t_gameinfo *gameinfo);
void update_map(t_gameinfo *gameinfo);
t_point *av_moves(t_gameinfo *gameinfo);
t_point get_move(t_gameinfo *gameinfo);

//##DUMMY INFO##
t_gameinfo * dummy_get_struct();
void dummy_show_grid();

#endif
