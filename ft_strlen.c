/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heurybia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/25 21:07:30 by heurybia          #+#    #+#             */
/*   Updated: 2019/09/25 21:07:32 by heurybia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

size_t			ft_strlen(const char *str)
{
	char		*ptr;
	size_t		res;

	res = 0;
	ptr = (char*)str;
	while (*(str++))
		++res;
	return (res);
}
