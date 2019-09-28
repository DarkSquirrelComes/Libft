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

static int			is_space(char ch, char c)
{
	return (ch == c || ch == 0);
}

static int			len(char *str, char c)
{
	int				res;

	res = 0;
	while (!is_space(str[res], c))
		++res;
	return (res);
}

static void			prep(int *a, int *b, char **c)
{
	*a = 0;
	*b = 0;
	*c = 0;
}

static unsigned int	count_words(char *str, char c)
{
	int				i;
	int				res;

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
	return (res);
}

char				**ft_strsplit(char const *s, char c)
{
	int				nw;
	int				i;
	int				j;
	char			**res;

	nw = count_words((char *)s, c);
	if (!(res = (char**)malloc(sizeof(char*) * (nw + 1))))
		return (0);
	prep(&i, &j, &res[nw]);
	while (*s)
	{
		while (is_space(*s, c) && *s)
			++s;
		if (*s)
		{
			if (!(res[j] = malloc(sizeof(char) * (len((char *)s, c)))))
				return (0);
			while (!is_space(s[0], c))
				res[j][i++] = *(s++);
			res[j][i] = 0;
			i = 0;
			++j;
		}
	}
	return (res);
}
