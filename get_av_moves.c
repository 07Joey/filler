#include "../includes/filler.h"

int eliminate_unav_point(t_point *points)
{
	return 0;
}

int find_radius_point(t_point *radius_pnts, t_gameinfo *gameinfo)
{
	int i;
	int j;
	int k;
	t_point av_point;
	j = 0;
	i = 0;
	k = 0;

	int t_b_right;
	int t_b_left;
	while(gameinfo->prev_token_pnts[i] != NULL)
	{
		j = pgameinfo->prev_token_pnts[i].x - gameinfo->newtoken.x;
		while(j < gameinfo->prev_token_pnts[j].x + gameinfo->newtoken.x)
		{
			av_point.x = j;
			av_point.y = gameinfo->prev_token_pnts[i];
			radius_points[j] = av_point;
		}
		i++;
	}
	return 0;
}

int bruteforce()
{
	return 0;
}

t_point *av_moves(t_gameinfo *gameinfo)
{
	t_point *point;
	//TODO
	return point;
}

int main ()
{
	dummy_show_grid();
	return 0;
}
