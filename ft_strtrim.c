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
#include "libft.h"

char		*ft_strtrim(char const *s)
{
	char	*ptr;
	char	*dest;
	size_t	len;

	ptr = (char*)s;
	while (*ptr && (*ptr == ' ' || *ptr == '\n' || *ptr == '\t'))
		++ptr;
	len = 0;
	while (ptr[len] && ptr[len] != ' ' && ptr[len] != '\n' && ptr[len] != '\t')
		++len;
	if (!(dest = malloc((len + 1) * sizeof(char))))
		return (0);
	dest[len] = 0;
	while (len-- > 0)
		dest[len] = s[len];
	return (dest);
}
