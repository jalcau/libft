/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalcauza <jalcauza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 20:17:05 by jalcauza          #+#    #+#             */
/*   Updated: 2021/07/05 16:49:44 by jalcauza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char	*ft_strnstr(const char *s, const char *need, size_t len)
{
	size_t	i;
	size_t	j;

	j = 0;
	i = 0;
	if (need[0] == '\0')
	{
		return ((char *) s);
	}
	while (s[i] != '\0' && i < len)
	{
		while (s[i + j] == need [j] && i + j < len)
		{
			if (need[j + 1] == '\0')
			{
				return ((char *) &s[i]);
			}
			j ++;
		}
		j = 0;
		i++;
	}
	 return (0);
}
