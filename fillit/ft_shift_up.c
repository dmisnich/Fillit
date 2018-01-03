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

int		ft_shift_up(t_coord *crd, int elem, int min_y)
{
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
