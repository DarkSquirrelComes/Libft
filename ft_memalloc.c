/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heurybia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/25 21:00:50 by heurybia          #+#    #+#             */
/*   Updated: 2019/09/25 21:00:53 by heurybia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdlib.h>

void		*ft_memalloc(size_t size)
{
	void	*p;

	if ((p = malloc(size)))
		ft_bzero(p, size);
	return (p);
}
