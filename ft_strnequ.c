/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heurybia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/25 21:09:02 by heurybia          #+#    #+#             */
/*   Updated: 2019/09/25 21:09:04 by heurybia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int			ft_strnequ(char const *s1, char const *s2, size_t n)
{
	char	*ptr1;
	char	*ptr2;
	size_t	i;

	if (s1 == 0 || s2 == 0)
		return (0);
	if (n == 0)
		return (1);
	ptr1 = (char*)s1;
	ptr2 = (char*)s2;
	i = 0;
	while (*ptr1 && *ptr2 && *ptr1 == *ptr2 && ++i <= n)
	{
		++ptr1;
		++ptr2;
	}
	return ((*ptr1 == *ptr2 || i == n) ? 1 : 0);
}
