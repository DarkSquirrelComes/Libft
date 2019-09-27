/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heurybia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/25 21:10:42 by heurybia          #+#    #+#             */
/*   Updated: 2019/09/25 21:10:45 by heurybia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int		is_space(char ch, char c)
{
	return (ch == c || ch == 0);
}

unsigned int	count_words(char *str, char ***r, char c)
{
	int			i;
	int			res;

	i = 1;
	res = 0;
	if (!is_space(str[0], c))
		++res;
	while (str[i] != '\0')
	{
		if (!is_space(str[i], c) && is_space(str[i - 1], c))
			res++;
		++i;
	}
	if (!(*r = (char**)malloc(sizeof(char*) * (res + 1))))
		return (0);
	return (res);
}

static void		step(char *dest, char **src, int *index)
{
	dest[*index] = *src[0];
	++*index;
	++*src;
}

char			**ft_strsplit(char const *s, char c)
{
	int			i;
	int			j;
	int			n_words;
	char		**res;
	char		*str;

	str = (char*)s;
	n_words = count_words(str, &res, c);
	res[n_words] = 0;
	i = -1;
	while (++i < n_words)
	{
		while (is_space(str[0], c))
			++str;
		j = 0;
		while (!is_space(str[j], c))
			++j;
		if (!(res[i] = (char*)malloc(sizeof(char) * (j + 1))))
			return (0);
		j = 0;
		while (!is_space(str[0], c))
			step(res[i], &str, &j);
		res[i][j] = '\0';
	}
	return (res);
}
