/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heurybia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/25 21:11:05 by heurybia          #+#    #+#             */
/*   Updated: 2019/09/25 21:11:08 by heurybia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char				*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char			*dest;
	unsigned int	i;

	if (!(dest = (char*)malloc((len + 1) * sizeof(char))))
		return (0);
	dest[len] = 0;
	i = start;
	while (i < start + (unsigned int)len)
	{
		dest[i] = s[i + (unsigned int)len];
		++i;
	}
	return (dest);
}
