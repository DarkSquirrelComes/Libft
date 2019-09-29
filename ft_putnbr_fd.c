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

static void	my_putnbr_fd(long long n, int fd)
{
	char	ch;

	if (n < 10)
	{
		ch = '0' + (char)(n);
		write(fd, &ch, 1);
	}
	else
	{
		my_putnbr_fd(n / 10, fd);
		ch = '0' + (char)(n % 10);
		write(fd, &ch, 1);
	}
}

void		ft_putnbr_fd(int n, int fd)
{
	char	ch;

	if (n < 0)
	{
		write(fd, "-", 1);
		my_putnbr_fd(-1 * ((long long)n), fd);
		return ;
	}
	if (n < 10)
	{
		ch = '0' + (char)(n);
		write(fd, &ch, 1);
	}
	else
	{
		my_putnbr_fd(n / 10, fd);
		ch = '0' + (char)(n % 10);
		write(fd, &ch, 1);
	}
}
