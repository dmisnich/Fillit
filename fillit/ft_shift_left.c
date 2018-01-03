/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_shift_left.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmisnich <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/14 13:53:15 by dmisnich          #+#    #+#             */
/*   Updated: 2017/12/14 13:55:37 by dmisnich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		ft_shift_left(t_coord *crd, int elem, int min_x)
{
	while (min_x != 0)
	{
		crd[elem].map.a.x--;
		crd[elem].map.b.x--;
		crd[elem].map.c.x--;
		crd[elem].map.d.x--;
		min_x--;
	}
	return (0);
}
