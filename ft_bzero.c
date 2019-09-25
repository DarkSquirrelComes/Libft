/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heurybia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/25 20:57:47 by heurybia          #+#    #+#             */
/*   Updated: 2019/09/25 20:57:49 by heurybia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void				ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*ptr;

	if (s == 0)
		return ;
	i = -1;
	ptr = (unsigned char*)s;
	while (++i < n)
		*(ptr + i) = 0;
}
