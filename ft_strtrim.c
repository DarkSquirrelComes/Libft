/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heurybia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/25 21:11:18 by heurybia          #+#    #+#             */
/*   Updated: 2019/09/25 21:11:20 by heurybia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	my_isspace(char c)
{
	return (c == ' ' || c == '\n' || c == '\t');
}

char		*ft_strtrim(char const *s)
{
	char	*ptr;
	char	*dest;
	size_t	len;

	ptr = (char*)s;
	while (*ptr && my_isspace(*ptr))
		++ptr;
	len = 0;
	while (ptr[len])
		++len;
	while (len > 0 && (ptr[len] == 0 || my_isspace(ptr[len])))
		--len;
	++len;
	if (!(dest = malloc((len + 1) * sizeof(char))))
		return (0);
	dest[len] = 0;
	while (len-- > 0)
		dest[len] = ptr[len];
	return (dest);
}
