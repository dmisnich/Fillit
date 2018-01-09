/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_validation3.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihozyain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/12 15:40:35 by ihozyain          #+#    #+#             */
/*   Updated: 2017/12/12 15:42:46 by ihozyain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		valid3_main(char *buf)
{
	int		i;
	int		count;

	i = 0;
	count = 0;
	while (i != 21)
	{
		if (buf[i] == '#')
		{
			if (buf[i + 1] == '#')
				count++;
			if (buf[i + 5] == '#')
				count++;
		}
		i++;
	}
	if (count < 3)
		return (0);
	return (1);
}
