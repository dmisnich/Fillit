/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_grid.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmisnich <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/30 13:16:04 by dmisnich          #+#    #+#             */
/*   Updated: 2017/11/30 13:16:07 by dmisnich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	**ft_grid(char *buf)
{
	char		**grid;
	int			len_row;
	int			k;
	t_coord		crd[27];

	len_row = 0;
	k = 0;
	while (buf[k] != '\0')
	{
		if (!(valid3_main(buf + k)))
			error();
		k = k + 21;
	}
	grid = ft_strsplit(buf, '\n');
	while (grid[len_row])
		len_row++;
	ft_call_coords(grid, len_row, crd);
	g_map_size = ft_min_square(len_row);
	begin(crd, len_row);
	return (grid);
}

void	begin(t_coord *crd, int len_row)
{
	int n;
	int count;
	int	ch;

	n = 0;
	ch = 'A';
	count = len_row / 4;
	g_map = ft_new_map();
	if (!ft_solve(crd, count, n, ch))
	{
		ft_shift_lu(crd, n);
		free_arr();
		g_map_size++;
		begin(crd, len_row);
	}
	else
		ft_write_in_display();
}

void	ft_write_in_display(void)
{
	int p;
	int l;

	p = 0;
	l = 0;
	while (p < g_map_size)
	{
		l = 0;
		while (l < g_map_size)
		{
			ft_putchar(g_map[p][l]);
			l++;
		}
		ft_putchar('\n');
		p++;
	}
}

void	free_arr(void)
{
	int i;

	i = 0;
	while (i < g_map_size)
	{
		free(g_map[i]);
		i++;
	}
	free(g_map);
	g_map = NULL;
}
