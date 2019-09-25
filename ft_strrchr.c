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

char		*ft_strrchr(const char *s, int c)
{
	char	*ptr;
	char	*res;

	ptr = (char*)s;
	res = 0;
	while (*ptr)
	{
		if (*ptr == (char)c)
			res = ptr;
		++ptr;
	}
	return (res);
}
