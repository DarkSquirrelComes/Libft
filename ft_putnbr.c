/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heurybia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/25 21:04:02 by heurybia          #+#    #+#             */
/*   Updated: 2019/09/25 21:04:04 by heurybia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

static void	my_putnbr(long long n)
{
	char	ch;

	if (n < 10)
	{
		ch = '0' + (char)(n);
		write(1, &ch, 1);
	}
	else
	{
		my_putnbr(n / 10);
		ch = '0' + (char)(n % 10);
		write(1, &ch, 1);
	}
}

void		ft_putnbr(int n)
{
	char	ch;

	if (n < 0)
	{
		write(1, "-", 1);
		my_putnbr(-1 * ((long long)n));
		return ;
	}
	if (n < 10)
	{
		ch = '0' + (char)(n);
		write(1, &ch, 1);
	}
	else
	{
		my_putnbr(n / 10);
		ch = '0' + (char)(n % 10);
		write(1, &ch, 1);
	}
}
