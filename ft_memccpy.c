/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heurybia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/25 21:01:05 by heurybia          #+#    #+#             */
/*   Updated: 2019/09/25 21:01:07 by heurybia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void				*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char	*ptr_d;
	unsigned char	*ptr_s;

	ptr_d = (unsigned char*)dest;
	ptr_s = (unsigned char*)src;
	while (n-- > 0)
	{
		*(ptr_d++) = *(ptr_s++);
		if (*ptr_s == (char)c)
			return (++ptr_d);
	}
	return (0);
}
