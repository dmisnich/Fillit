/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_shift_lu.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmisnich <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/11 15:19:31 by dmisnich          #+#    #+#             */
/*   Updated: 2017/12/11 15:25:20 by dmisnich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		ft_shift_lu(t_coord *crd, int elem)
{
	int			min_x;
	int			min_y;

	min_y = ft_min_y(crd, elem);
	min_x = ft_min_x(crd, elem);
	while (min_x != 0)
	{
		crd[elem].map.a.x--;
		crd[elem].map.b.x--;
		crd[elem].map.c.x--;
		crd[elem].map.d.x--;
		min_x--;
	}
	while (min_y != 0)
	{
		crd[elem].map.a.y--;
		crd[elem].map.b.y--;
		crd[elem].map.c.y--;
		crd[elem].map.d.y--;
		min_y--;
	}
	return (0);
}
