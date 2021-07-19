/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalcauza <jalcauza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/22 18:47:41 by jalcauza          #+#    #+#             */
/*   Updated: 2021/07/17 18:03:09 by jalcauza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len;
	size_t	j;
	size_t	i;
	char	*dst;

	j = 0;
	i = 0;
	if (!s1 || !s2)
		return (NULL);
	len = ft_strlen((char *)s1) + ft_strlen((char *)s2);
	dst = malloc(len + 1);
	if (!dst)
		return (NULL);
	while (s1[j] != '\0')
	{
		dst[j] = s1[j];
		j++;
	}
	while (s2[i] != '\0')
	{
		dst[i + j] = s2[i];
		i++;
	}
	dst[i + j] = '\0';
	return (dst);
}
