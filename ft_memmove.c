/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heurybia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/25 21:02:08 by heurybia          #+#    #+#             */
/*   Updated: 2019/09/25 21:02:09 by heurybia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>

void				*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*ptr_d;
	unsigned char	*ptr_s;
	unsigned char	*ptr;
	size_t			m;

	m = n;
	ptr_d = (unsigned char*)malloc(n * sizeof(char));
	ptr = ptr_d;
	ptr_s = (unsigned char*)src;
	while (n-- > 0)
		*(ptr_d++) = *(ptr_s++);
	ptr_s = ptr;
	ptr_d = (unsigned char*)dest;
	while (m-- > 0)
		*(ptr_d++) = *(ptr_s++);
	return (dest);
}
