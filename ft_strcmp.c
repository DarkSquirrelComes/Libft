/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heurybia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/25 21:05:34 by heurybia          #+#    #+#             */
/*   Updated: 2019/09/25 21:05:36 by heurybia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int					ft_strcmp(const char *s1, const char *s2)
{
	unsigned int	i;

	i = 0;
	while (s2[i] && s1[i] && s1[i] == s2[i])
		++i;
	if ((int)s1[i] - (int)s2[i] == 0)
		return (0);
	if (s1[i] == 0)
		return (-1);
	if (s2[i] == 0)
		return (1);
	if ((int)s1[i] - (int)s2[i] < 0)
		return (-1);
	else
		return (1);
}
