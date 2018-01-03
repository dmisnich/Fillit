/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_and_shift.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmisnich <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/27 16:39:09 by dmisnich          #+#    #+#             */
/*   Updated: 2017/12/27 16:39:11 by dmisnich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int			ft_check_xy(t_coord *crd, int n)
{
	if (g_map[crd[n].map.a.y][crd[n].map.a.x] != '.'
		|| g_map[crd[n].map.b.y][crd[n].map.b.x] != '.'
		|| g_map[crd[n].map.c.y][crd[n].map.c.x] != '.'
		|| g_map[crd[n].map.d.y][crd[n].map.d.x] != '.')
		return (0);
	return (1);
}

void		ft_shift_x(t_coord *crd, int n)
{
	crd[n].map.a.x++;
	crd[n].map.b.x++;
	crd[n].map.c.x++;
	crd[n].map.d.x++;
}

void		ft_shift_y(t_coord *crd, int n)
{
	crd[n].map.a.y++;
	crd[n].map.b.y++;
	crd[n].map.c.y++;
	crd[n].map.d.y++;
}
