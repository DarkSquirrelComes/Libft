/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heurybia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/25 21:08:48 by heurybia          #+#    #+#             */
/*   Updated: 2019/09/25 21:08:52 by heurybia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char					*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int		i;
	unsigned int		len;
	unsigned int		flag;

	i = 0;
	flag = 0;
	while (src[i] != '\0')
		++i;
	len = i;
	i = 0;
	while (i < n)
	{
		if (flag)
			dest[i] = '\0';
		else if (src[i] == '\0')
		{
			flag = 1;
			dest[i] = '\0';
		}
		else
			dest[i] = src[i];
		++i;
	}
	return (dest);
}
