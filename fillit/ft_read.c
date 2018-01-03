/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmisnich <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/27 12:17:22 by dmisnich          #+#    #+#             */
/*   Updated: 2017/11/27 12:17:23 by dmisnich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	error(void)
{
	ft_putstr("error\n");
	exit(0);
}

int		ft_read(char **argv, int fd, int res)
{
	char	buf[BUF_SIZE + 1];
	int		k;
	char	a;

	k = 0;
	a = 0;
	fd = open(argv[1], O_RDONLY);
	while ((res = read(fd, buf, BUF_SIZE)))
	{
		a = 1;
		buf[res] = '\0';
		if (buf[1] == '\0')
			error();
		while (buf[k] != '\0')
		{
			if (!(ft_validator(buf + k, res) == 1))
				error();
			k = k + 21;
		}
	}
	if (a == 0)
		error();
	ft_grid(buf);
	return (0);
}
