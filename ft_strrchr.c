/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heurybia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/25 21:10:25 by heurybia          #+#    #+#             */
/*   Updated: 2019/09/25 21:10:28 by heurybia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char				*ft_strrchr(const char *s, int c)
{
	unsigned int	res;
	unsigned int	i;

	i = 0;
	res = 0;
	while (s[i])
	{
		if ((int)s[i] == c)
			res = i;
		++i;
	}
	if (c == 0)
		return ((char*)s + i);
	if (c == s[res])
		return ((char*)s + res);
	else
		return (0);
}
