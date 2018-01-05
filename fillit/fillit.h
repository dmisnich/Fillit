/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmisnich <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/27 12:29:30 by dmisnich          #+#    #+#             */
/*   Updated: 2017/11/27 12:29:31 by dmisnich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

# define BUF_SIZE 664
# include <fcntl.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

int		g_hash;
char	**g_map;
int		g_map_size;

typedef struct	s_point
{
	int		x;
	int		y;
}				t_point;

typedef struct	s_coords
{
	t_point		a;
	t_point		b;
	t_point		c;
	t_point		d;
}				t_coords;

typedef struct	s_coord
{
	t_coords	map;
}				t_coord;

char			**ft_grid(char *buf);
void			error(void);
char			**ft_new_map(void);
char			**ft_strsplit(char const *s, char c);
char			*ft_strnew(size_t size);
char			*ft_strsub(char const *s, unsigned int start, size_t len);
int				ft_hash_check(int hash, char **grid, t_point map_coord);
int				ft_min_x(t_coord *crd, int elem);
int				ft_min_y(t_coord *crd, int elem);
int				ft_max_x(t_coord *crd, int elem);
int				ft_max_y(t_coord *crd, int elem);
int				ft_read(char **argv, int fd, int res);
int				ft_shift_up(t_coord *crd, int elem, int min_y);
int				ft_shift_left(t_coord *crd, int elem, int min_x);
int				ft_validator(char *buf, int res);
int				main(int argc, char **argv);
int				valid1(char *buf);
int				valid2(char *buf, int res);
int				valid3_main(char *buf);
size_t			ft_strlen(const char *str);
t_coord			ft_coorditanes(char **grid, int len_row, int elem);
t_coord			ft_coorditanes_check(char **grid,
				t_coord *crd, t_point map_coord, int elem);
t_coord			ft_core(t_coord *crd, int elem);
void			*ft_memset(void *dest, int c, size_t len);
void			ft_bzero(void *s, size_t size);
void			ft_putchar(char c);
void			ft_putstr(char *str);
t_coord			ft_call_coords(char **grid, int len_row, t_coord *crd);
int				ft_min_square(int len_row);
int				ft_sqrt(int nb);
int				ft_solve(t_coord *crd, int count, int n, int ch);
char			ft_write_on_map(t_coord *crd, char ch, int n);
int				ft_check_xy(t_coord *crd, int n);
void			ft_shift_x(t_coord *crd, int n);
void			ft_shift_y(t_coord *crd, int n);
void			ft_write_in_display(void);
char			del_tetri(t_coord *crd, int n);
void			begin(t_coord *crd, int len_row);
void			free_arr(void);
int				ft_shift_lu(t_coord *crd, int elem);
void			ft_ifsolve(t_coord *crd, int *count, int *n, int *ch);
int				ifsolvetwo(t_coord *crd, int *count, int *n, int *ch);

#endif
