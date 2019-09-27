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

void				*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*ptr_d;
	unsigned char	*ptr_s;
	size_t			i;

	ptr_d = (unsigned char*)dest;
	ptr_s = (unsigned char*)src;
	i = 0;
	if (ptr_s == ptr_d)
		return (dest);
	if (ptr_s > ptr_d)
		while (i < n && ptr_s[i])
		{
			ptr_d[i] = ptr_s[i];
			++i;
		}
	else
	{
		i = n;
		while (i-- > 0)
			ptr_d[i] = ptr_s[i];
	}
	return (dest);
}
