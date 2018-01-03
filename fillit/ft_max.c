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

static	int		help_x(t_coord *crd, int elem)
{
	if (crd[elem].map.a.x >= crd[elem].map.d.x)
		return (1);
	else if (crd[elem].map.a.x <= crd[elem].map.d.x)
		return (0);
	return (0);
}

int				ft_max_x(t_coord *crd, int elem)
{
	if (crd[elem].map.a.x >= crd[elem].map.b.x)
	{
		if (crd[elem].map.a.x >= crd[elem].map.c.x)
			return (help_x(crd, elem) == 1
				? (crd[elem].map.a.x) : (crd[elem].map.d.x));
		else if (crd[elem].map.a.x <= crd[elem].map.c.x)
		{
			if (crd[elem].map.a.x <= crd[elem].map.d.x)
				return (crd[elem].map.d.x);
			return (crd[elem].map.c.x);
		}
	}
	else if (crd[elem].map.b.x >= crd[elem].map.c.x)
	{
		if (crd[elem].map.b.x >= crd[elem].map.d.x)
			return (crd[elem].map.b.x);
		else
			return (crd[elem].map.d.x);
	}
	else if (crd[elem].map.c.x >= crd[elem].map.d.x)
		return (crd[elem].map.c.x);
	else if (crd[elem].map.c.x <= crd[elem].map.d.x)
		return (crd[elem].map.d.x);
	return (0);
}

static	int		help_y(t_coord *crd, int elem)
{
	if (crd[elem].map.a.y >= crd[elem].map.d.y)
		return (1);
	else if (crd[elem].map.a.y <= crd[elem].map.d.y)
		return (0);
	return (0);
}

int				ft_max_y(t_coord *crd, int elem)
{
	if (crd[elem].map.a.y >= crd[elem].map.b.y)
	{
		if (crd[elem].map.a.y >= crd[elem].map.c.y)
			return (help_y(crd, elem) == 1
				? (crd[elem].map.a.y) : (crd[elem].map.d.y));
		else if (crd[elem].map.a.y <= crd[elem].map.c.y)
		{
			if (crd[elem].map.a.y <= crd[elem].map.d.y)
				return (crd[elem].map.d.y);
			return (crd[elem].map.c.y);
		}
	}
	else if (crd[elem].map.b.y >= crd[elem].map.c.y)
	{
		if (crd[elem].map.b.y >= crd[elem].map.d.y)
			return (crd[elem].map.b.y);
		else
			return (crd[elem].map.d.y);
	}
	else if (crd[elem].map.c.y >= crd[elem].map.d.y)
		return (crd[elem].map.c.y);
	else if (crd[elem].map.c.y <= crd[elem].map.d.y)
		return (crd[elem].map.d.y);
	return (0);
}
