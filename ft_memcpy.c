/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heurybia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/25 21:01:40 by heurybia          #+#    #+#             */
/*   Updated: 2019/09/25 21:01:42 by heurybia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void				*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*ptr_d;
	unsigned char	*ptr_s;

	if (!n || dest == src)
		return (dest);
	ptr_d = (unsigned char*)dest;
	ptr_s = (unsigned char*)src;
	while (n-- > 0)
		*(ptr_d++) = *(ptr_s++);
	return (dest);
}
