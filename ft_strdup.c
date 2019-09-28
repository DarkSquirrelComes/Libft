/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heurybia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/25 21:06:13 by heurybia          #+#    #+#             */
/*   Updated: 2019/09/25 21:06:15 by heurybia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char				*ft_strdup(const char *src)
{
	unsigned int	i;
	unsigned int	n;
	char			*dest;

	i = 0;
	while (src[i] != '\0')
		++i;
	n = i;
	if (!(dest = (char*)malloc(sizeof(char) * (n + 1))))
		return (0);
	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		++i;
	}
	dest[i] = 0;
	return (dest);
}
