/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_min.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmisnich <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/27 17:12:42 by dmisnich          #+#    #+#             */
/*   Updated: 2017/12/27 17:12:44 by dmisnich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		ft_min_x(t_coord *crd, int elem)
{
	if (crd[elem].map.a.x <= crd[elem].map.b.x)
	{
		if (crd[elem].map.a.x <= crd[elem].map.c.x)
		{
			if (crd[elem].map.a.x <= crd[elem].map.d.x)
				return (crd[elem].map.a.x);
			else if (crd[elem].map.a.x >= crd[elem].map.d.x)
				return (crd[elem].map.d.x);
		}
		else if (crd[elem].map.a.x >= crd[elem].map.c.x)
			return (crd[elem].map.c.x);
	}
	else if (crd[elem].map.b.x <= crd[elem].map.c.x)
	{
		if (crd[elem].map.b.x <= crd[elem].map.d.x)
			return (crd[elem].map.b.x);
		else
			return (crd[elem].map.d.x);
	}
	else if (crd[elem].map.c.x <= crd[elem].map.d.x)
		return (crd[elem].map.c.x);
	else if (crd[elem].map.c.x >= crd[elem].map.d.x)
		return (crd[elem].map.d.x);
	return (0);
}

int		ft_min_y(t_coord *crd, int elem)
{
	if (crd[elem].map.a.y <= crd[elem].map.b.y)
	{
		if (crd[elem].map.a.y <= crd[elem].map.c.y)
		{
			if (crd[elem].map.a.y <= crd[elem].map.d.y)
				return (crd[elem].map.a.y);
			else if (crd[elem].map.a.y >= crd[elem].map.d.y)
				return (crd[elem].map.d.y);
		}
		else if (crd[elem].map.a.y >= crd[elem].map.c.y)
			return (crd[elem].map.c.y);
	}
	else if (crd[elem].map.b.y <= crd[elem].map.c.y)
	{
		if (crd[elem].map.b.y <= crd[elem].map.d.y)
			return (crd[elem].map.b.y);
		else
			return (crd[elem].map.d.y);
	}
	else if (crd[elem].map.c.y <= crd[elem].map.d.y)
		return (crd[elem].map.c.y);
	else if (crd[elem].map.c.y >= crd[elem].map.d.y)
		return (crd[elem].map.d.y);
	return (0);
}
