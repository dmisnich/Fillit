/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_validation.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihozyain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/30 10:43:15 by ihozyain          #+#    #+#             */
/*   Updated: 2017/11/30 10:44:20 by ihozyain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		valid1(char *buf)
{
	int		i;
	int		count_d;
	int		count_s;

	i = 0;
	count_d = 0;
	count_s = 0;
	while (i != 21)
	{
		if (buf[i] == '.')
			count_d++;
		if (buf[i] == '#')
			count_s++;
		i++;
	}
	if (count_d == 12 && count_s == 4)
		return (1);
	return (0);
}

int		valid2(char *buf, int res)
{
	int		i;
	int		count_n;

	i = 0;
	count_n = 0;
	while (buf[i] && i != 21)
	{
		if (((i - 4) % 5 == 0 || i % 21 == 0) && buf[i] == '\n')
			count_n++;
		i++;
		if (buf[res - 1] == '\n' && buf[res - 2] == '\n')
			return (0);
	}
	if (count_n == 5 || count_n == 4)
		return (1);
	return (0);
}

int		ft_validator(char *buf, int res)
{
	int		v1;
	int		v2;
	int		i;

	v1 = valid1(buf);
	v2 = valid2(buf, res);
	i = 1;
	if (v1 == 1 && v2 == 1)
		return (i);
	return (0);
}
