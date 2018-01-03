/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_core.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihozyain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/06 12:00:18 by ihozyain          #+#    #+#             */
/*   Updated: 2017/12/06 12:03:10 by ihozyain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

t_coord		ft_core(t_coord *crd, int elem)
{
	int		min_x;
	int		min_y;

	min_x = ft_min_x(crd, elem);
	min_y = ft_min_y(crd, elem);
	ft_shift_left(crd, elem, min_x);
	ft_shift_up(crd, elem, min_y);
	return (crd[elem]);
}
