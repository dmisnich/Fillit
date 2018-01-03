/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_new_map.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmisnich <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/12 10:15:32 by dmisnich          #+#    #+#             */
/*   Updated: 2017/12/12 10:15:34 by dmisnich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		ft_min_square(int len_row)
{
	int		len;

	len = len_row;
	len = ft_sqrt(len);
	if (len == 2)
		return (len);
	return (len);
}

int		ft_sqrt(int nb)
{
	int		i;
	int		temp;

	i = 0;
	temp = 0;
	if (nb == 0)
		return (i);
	while (temp <= nb && i < nb)
	{
		i++;
		temp = i * i;
	}
	if (temp != nb)
		i--;
	return (i);
}

char	**ft_new_map(void)
{
	char	**map;
	int		i;

	i = 0;
	map = (char**)malloc(sizeof(char*) * g_map_size + 1);
	while (i < g_map_size)
	{
		*(map + i) = (char *)malloc(g_map_size + 1);
		ft_memset(*(map + i), '.', g_map_size);
		map[i][g_map_size] = '\0';
		i++;
	}
	map[i] = NULL;
	return (map);
}
