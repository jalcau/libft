/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalcauza <jalcauza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 20:17:12 by jalcauza          #+#    #+#             */
/*   Updated: 2021/07/14 17:52:43 by jalcauza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int			i;
	int			j;
	const char	*ini;

	i = 0;
	ini = str;
	j = ft_strlen(str);
	if (ini[i] == c)
	{
		return ((char *)&ini[i]);
	}
	while (j > 0 && ini[j] != c)
	{
		j--;
	}
	if (j != 0)
		return ((char *)&ini[j]);
	return (0);
}
