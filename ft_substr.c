/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalcauza <jalcauza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/22 18:00:39 by jalcauza          #+#    #+#             */
/*   Updated: 2021/07/19 20:17:46 by jalcauza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*dest;
	size_t	i;
	size_t	j;

	dest = (char *)malloc(sizeof(char) * len + 1);
	if (!s || !(dest))
		return (0);
	i = start;
	j = 0;
	while (s[i] != '\0' && j < len && start < len)
	{
		dest[j] = s[i];
		j++;
		i++;
	}
	dest[j] = '\0';
	return (dest);
}
