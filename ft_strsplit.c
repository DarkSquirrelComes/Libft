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
	int				r;

	r = 0;
	while (!is_space(str[r], c))
		++r;
	return (r);
}

static void			prep(int *a, int *b, char **c)
{
	*a = 0;
	*b = 0;
	*c = 0;
}

static unsigned int	cw(char *str, char c, int *nw)
{
	int				i;
	int				r;

	i = 1;
	r = 0;
	if (!is_space(str[0], c))
		++r;
	while (str[i] != '\0')
	{
		if (!is_space(str[i], c) && is_space(str[i - 1], c))
			r++;
		++i;
	}
	*nw = r;
	return (r);
}

char				**ft_strsplit(char const *s, char c)
{
	int				nw;
	int				i;
	int				j;
	char			**r;

	if (!s || !(r = (char**)malloc(sizeof(char*) * \
		(cw((char *)s, c, &nw) + 1))))
		return (0);
	prep(&i, &j, &r[nw]);
	while (*s)
	{
		while (is_space(*s, c) && *s)
			++s;
		if (*s)
		{
			if (!(r[j] = malloc(sizeof(char) * (len((char *)s, c)))))
				return (0);
			while (!is_space(s[0], c))
				r[j][i++] = *(s++);
			r[j][i] = 0;
			i = 0;
			++j;
		}
	}
	return (r);
}
