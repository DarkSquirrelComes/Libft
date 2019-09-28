/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heurybia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/25 21:06:59 by heurybia          #+#    #+#             */
/*   Updated: 2019/09/25 21:07:01 by heurybia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include "libft.h"

char		*ft_strjoin(char const *s1, char const *s2)
{
	size_t	l1;
	size_t	l2;
	char	*dest;

	if (s1 == 0 || s2 == 0)
		return (0);
	l1 = ft_strlen(s1);
	l2 = ft_strlen(s2);
	if (!(dest = malloc((l1 + l2 + 1) * sizeof(char))))
		return (0);
	ft_strcpy(dest, s1);
	ft_strcpy(dest + l1, s2);
	dest[l1 + l2] = 0;
	return (dest);
}
