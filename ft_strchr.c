/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heurybia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/25 21:05:14 by heurybia          #+#    #+#             */
/*   Updated: 2019/09/25 21:05:16 by heurybia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char				*ft_strchr(const char *s, int c)
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			return ((char*)s + i);
		++i;
	}
	if (c == 0)
		return ((char*)s + i);
	else
		return (0);
}
