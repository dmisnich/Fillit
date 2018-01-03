/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihozyain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/31 13:53:50 by ihozyain          #+#    #+#             */
/*   Updated: 2017/11/01 11:02:48 by ihozyain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	*ft_memset(void *dst, int c, size_t n)
{
	char	*str;
	size_t	i;

	str = (char *)dst;
	i = 0;
	c = (char)c;
	while (i < n)
	{
		str[i] = c;
		i++;
	}
	return (dst);
}
