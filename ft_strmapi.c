/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heurybia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/25 21:07:53 by heurybia          #+#    #+#             */
/*   Updated: 2019/09/25 21:07:56 by heurybia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char				*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*res;
	int				i;
	int				n;

	n = ft_strlen(s);
	res = malloc(sizeof(char) * (n + 1));
	i = -1;
	while (++i < n)
		res[i] = f(i, (char)s[i]);
	res[n] = 0;
	return (res);
}
