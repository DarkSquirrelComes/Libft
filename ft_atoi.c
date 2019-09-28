/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heurybia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 16:50:01 by heurybia          #+#    #+#             */
/*   Updated: 2019/06/11 15:33:46 by heurybia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int					ft_atoi(char *str)
{
	int				i;
	int				minus;
	long long		res;
	unsigned int	digit;

	res = 0;
	i = 0;
	while (str[i] == ' ' || (str[i] >= '\t' && str[i] <= '\r'))
		++i;
	minus = (str[i] == '-') ? -1 : 1;
	if (str[i] == '+' || str[i] == '-')
		++i;
	while (1)
	{
		digit = str[i] - '0';
		if (digit > 9)
			break ;
		res = 10 * res + digit;
		++i;
	}
	return ((int)(res * minus));
}
