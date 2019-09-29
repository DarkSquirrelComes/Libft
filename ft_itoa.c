/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heurybia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/25 21:00:38 by heurybia          #+#    #+#             */
/*   Updated: 2019/09/25 21:00:40 by heurybia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>

static size_t	intlen(int n)
{
	size_t		res;

	if (n == 0)
		return (1);
	res = 0;
	if (n < 0)
	{
		n *= -1;
		++res;
	}
	while (n != 0)
	{
		n /= 10;
		++res;
	}
	return (res);
}

char			*ft_itoa(int nn)
{
	size_t		size;
	char		*res;
	long long	n;

	n = nn;
	size = intlen(n);
	if (n < 0)
		n *= -1;
	if (!(res = (char*)malloc(sizeof(char) * (size + 1))))
		return (0);
	res[size] = 0;
	while (size > 0)
	{
		--size;
		res[size] = (char)(n % 10 + 48);
		n /= 10;
	}
	if (res[0] == '0' && nn != 0)
		res[0] = '-';
	return (res);
}
