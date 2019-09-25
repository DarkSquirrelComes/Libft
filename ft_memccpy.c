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
	size_t			i;
	unsigned char	*ptr_d;
	unsigned char	*ptr_s;

	i = -1;
	ptr_d = (unsigned char*)dest;
	ptr_s = (unsigned char*)src;
	while (++i < n)
	{
		ptr_d[i] = ptr_s[i];
		if (ptr_s[i] == c)
			return (&ptr_d[i + 1]);
	}
	return (0);
}
