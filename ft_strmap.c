/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heurybia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/25 21:07:41 by heurybia          #+#    #+#             */
/*   Updated: 2019/09/25 21:07:44 by heurybia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char				*ft_strmap(char const *s, char (*f)(char))
{
	char			*res;
	int				i;
	int				n;

	n = ft_strlen(s);
	res = malloc(sizeof(char) * (n + 1));
	i = -1;
	while (++i < n)
	{
		res[i] = f((char)s[i]);
		++i;
	}
	res[n] = 0;
	return (res);
}
