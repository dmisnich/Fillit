/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihozyain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/20 09:56:43 by ihozyain          #+#    #+#             */
/*   Updated: 2017/11/24 12:36:11 by ihozyain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static int		ft_cnt_parts(const char *s, char c)
{
	int		cnt;
	int		in_sub;

	in_sub = 0;
	cnt = 0;
	if (s == 0 || c == 0)
		return (0);
	while (*s != '\0')
	{
		if (in_sub == 1 && *s == c)
			in_sub = 0;
		if (in_sub == 0 && *s != c)
		{
			in_sub = 1;
			cnt++;
		}
		s++;
	}
	return (cnt);
}

static int		ft_wlen(const char *s, char c)
{
	int		len;

	len = 0;
	while (*s != c && *s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}

char			**ft_strsplit(char const *s, char c)
{
	char	**t;
	int		nb_word;
	int		i;

	i = 0;
	nb_word = ft_cnt_parts((const char *)s, c);
	t = (char **)malloc(sizeof(*t) * (ft_cnt_parts((const char *)s, c) + 1));
	if (t == 0)
		return (0);
	while (nb_word--)
	{
		while (*s == c && *s != '\0')
			s++;
		t[i] = ft_strsub((const char *)s, 0, ft_wlen((const char *)s, c));
		if (t[i] == 0)
			return (0);
		s = s + ft_wlen(s, c);
		i++;
	}
	t[i] = 0;
	return (t);
}
