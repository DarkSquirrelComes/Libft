/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heurybia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/25 21:08:30 by heurybia          #+#    #+#             */
/*   Updated: 2019/09/25 21:08:32 by heurybia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strncmp(const char *s1, const char *s2, unsigned int n)
{
	unsigned int i;

	if (n == 0)
		return (0);
	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && i < n - 1)
		++i;
	if (s1[i] - s2[i] == 0)
		return (0);
	if (s1[i] == 0)
		return (-1);
	if (s2[i] == 0)
		return (1);
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
