/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_figure.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihozyain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/04 10:49:10 by ihozyain          #+#    #+#             */
/*   Updated: 2017/12/04 10:50:04 by ihozyain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

t_coord		ft_call_coords(char **grid, int len_row, t_coord *crd)
{
	int		elem;
	int		i;

	i = 0;
	elem = 0;
	while (i++ != len_row / 4)
	{
		crd[elem] = ft_coorditanes(grid, len_row, elem);
		elem++;
		grid = grid + 4;
	}
	return (crd[elem]);
}

t_coord		ft_coorditanes(char **grid, int len_row, int elem)
{
	int		i;
	int		k;
	int		hash;
	t_point map_coord;
	t_coord crd[27];

	hash = g_hash;
	map_coord.x = 0;
	map_coord.y = 0;
	k = len_row / 4;
	g_hash = 0;
	i = 0;
	while (i < 4)
	{
		map_coord.x = 0;
		while (grid[map_coord.y][map_coord.x])
		{
			ft_coorditanes_check(grid, crd, map_coord, elem);
			hash = ft_hash_check(hash, grid, map_coord);
			map_coord.x++;
		}
		map_coord.y++;
		i++;
	}
	return (ft_core(crd, elem));
}

t_coord		ft_coorditanes_check(char **grid, t_coord *crd,
							t_point map_coord, int elem)
{
	if (grid[map_coord.y][map_coord.x] == '#' && g_hash == 3)
	{
		crd[elem].map.d.x = map_coord.x;
		crd[elem].map.d.y = map_coord.y;
		g_hash++;
	}
	if (grid[map_coord.y][map_coord.x] == '#' && g_hash == 2)
	{
		crd[elem].map.c.x = map_coord.x;
		crd[elem].map.c.y = map_coord.y;
		g_hash++;
	}
	if (grid[map_coord.y][map_coord.x] == '#' && g_hash == 1)
	{
		crd[elem].map.b.x = map_coord.x;
		crd[elem].map.b.y = map_coord.y;
		g_hash++;
	}
	if (grid[map_coord.y][map_coord.x] == '#' && g_hash == 0)
	{
		crd[elem].map.a.x = map_coord.x;
		crd[elem].map.a.y = map_coord.y;
		g_hash++;
	}
	return (crd[elem]);
}

int			ft_hash_check(int hash, char **grid, t_point map_coord)
{
	if ((hash >= 0 && hash <= 3) && grid[map_coord.y][map_coord.x] == '#')
		hash++;
	return (hash);
}
