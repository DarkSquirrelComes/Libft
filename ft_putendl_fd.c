/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heurybia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/25 21:03:07 by heurybia          #+#    #+#             */
/*   Updated: 2019/09/25 21:03:11 by heurybia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void		ft_putendl_fd(char const *s, int fd)
{
	char	*ptr;

	ptr = (char*)s;
	while (*ptr)
	{
		write(fd, ptr, 1);
		++ptr;
	}
	write(fd, "\n", 1);
}
