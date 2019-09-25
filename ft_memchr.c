/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heurybia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/25 21:01:16 by heurybia          #+#    #+#             */
/*   Updated: 2019/09/25 21:01:18 by heurybia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void			*ft_memchr(const void *s, int c, size_t n)
{
	char		*ptr;

	ptr = (char*)s;
	while (n-- > 0)
		if (*(ptr++) == (char)c)
			return (--ptr);
	return (0);
}
