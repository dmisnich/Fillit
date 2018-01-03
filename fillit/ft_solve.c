/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solve.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmisnich <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/27 14:46:43 by dmisnich          #+#    #+#             */
/*   Updated: 2017/12/27 14:46:46 by dmisnich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int			ft_solve(t_coord *crd, int count, int n, int ch)
{
	int			max_x;
	int			max_y;
	int			min_x;

	if (count == 0)
		return (1);
	max_y = ft_max_y(crd, n);
	while (max_y++ < g_map_size)
	{
		min_x = ft_min_x(crd, n);
		ft_shift_left(crd, n, min_x);
		max_x = ft_max_x(crd, n);
		while (max_x++ < g_map_size)
		{
			if (ft_check_xy(crd, n) == 1)
				if (ifsolvetwo(crd, &count, &n, &ch))
					return (1);
			ft_shift_x(crd, n);
		}
		ft_shift_y(crd, n);
	}
	return (0);
}

void		ft_ifsolve(t_coord *crd, int *count, int *n, int *ch)
{
	del_tetri(crd, *n);
	ft_shift_lu(crd, *n + 1);
	*count += 1;
	*ch -= 1;
}

int			ifsolvetwo(t_coord *crd, int *count, int *n, int *ch)
{
	ft_write_on_map(crd, *ch, *n);
	if (ft_solve(crd, --(*count), *n + 1, ++(*ch)) == 1)
		return (1);
	else
		ft_ifsolve(crd, count, n, ch);
	return (0);
}

char		ft_write_on_map(t_coord *crd, char ch, int n)
{
	int			i;
	int			k;

	i = 0;
	while (g_map[i])
	{
		k = 0;
		while (g_map[i][k])
		{
			if (crd[n].map.a.x == k && crd[n].map.a.y == i)
				g_map[i][k] = ch;
			if (crd[n].map.b.x == k && crd[n].map.b.y == i)
				g_map[i][k] = ch;
			if (crd[n].map.c.x == k && crd[n].map.c.y == i)
				g_map[i][k] = ch;
			if (crd[n].map.d.x == k && crd[n].map.d.y == i)
				g_map[i][k] = ch;
			k++;
		}
		i++;
	}
	return (0);
}

char		del_tetri(t_coord *crd, int n)
{
	int			i;
	int			k;

	i = 0;
	while (g_map[i])
	{
		k = 0;
		while (g_map[i][k])
		{
			if (crd[n].map.a.x == k && crd[n].map.a.y == i)
				g_map[i][k] = '.';
			if (crd[n].map.b.x == k && crd[n].map.b.y == i)
				g_map[i][k] = '.';
			if (crd[n].map.c.x == k && crd[n].map.c.y == i)
				g_map[i][k] = '.';
			if (crd[n].map.d.x == k && crd[n].map.d.y == i)
				g_map[i][k] = '.';
			k++;
		}
		i++;
	}
	return (0);
}
