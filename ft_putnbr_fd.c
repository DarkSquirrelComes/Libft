/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heurybia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/25 21:04:15 by heurybia          #+#    #+#             */
/*   Updated: 2019/09/25 21:04:18 by heurybia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

void		ft_putnbr_fd(int n, int fd)
{
	char	ch;

	if (n < 0)
	{
		write(fd, "-", 1);
		ft_putnbr_fd(-1 * n, fd);
		return ;
	}
	if (n < 10)
	{
		ch = '0' + (char)(n);
		write(fd, &ch, 1);
	}
	else
	{
		ft_putnbr_fd(n / 10, fd);
		ch = '0' + (char)(n % 10);
		write(fd, &ch, 1);
	}
}
