/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heurybia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/12 19:47:32 by heurybia          #+#    #+#             */
/*   Updated: 2019/06/13 15:04:26 by heurybia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char				*ft_strdup(char *src)
{
	unsigned int	i;
	unsigned int	n;
	char			*dest;

	i = 0;
	while (src[i] != '\0')
		++i;
	n = i;
	dest = (char*)malloc(sizeof(char) * (n + 1));
	i = 0;
	while (i <= n)
		dest[i] = src[i];
	return (dest);
}
