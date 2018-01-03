/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmisnich <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/27 10:49:44 by dmisnich          #+#    #+#             */
/*   Updated: 2017/11/27 10:49:46 by dmisnich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		main(int argc, char **argv)
{
	int		fd;
	int		res;

	fd = 0;
	res = 0;
	if (argc == 1 || argc > 2)
		ft_putstr("usage: ./fillit file_containing_tetriminos\n");
	else
		ft_read(argv, fd, res);
	return (0);
}
