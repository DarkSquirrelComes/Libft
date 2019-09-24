/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heurybia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/11 16:42:39 by heurybia          #+#    #+#             */
/*   Updated: 2019/06/11 16:42:43 by heurybia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(const char *str, const char *to_find)
{
	int	i;
	int	j;
	int	len1;
	int	len2;
	int	res;

	len1 = 0;
	while (str[len1] != '\0')
		++len1;
	len2 = 0;
	while (to_find[len2] != '\0')
		++len2;
	i = 0;
	while (i <= len1 - len2)
	{
		res = 1;
		j = -1;
		while (j++ < len2)
			if (str[i + j] != to_find[j] && to_find[j] != '\0')
				res = 0;
		if (res)
			return (str + i);
		++i;
	}
	return (0);
}
