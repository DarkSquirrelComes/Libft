/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heurybia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/25 21:09:30 by heurybia          #+#    #+#             */
/*   Updated: 2019/09/25 21:09:32 by heurybia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"
#include <stdlib.h>

char		*ft_strnew(size_t size)
{
	char	*p;

	if ((p = (char*)malloc(size + 1)))
		ft_bzero(p, size + 1);
	return (p);
}
