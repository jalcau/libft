/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalcauza <jalcauza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 19:10:56 by jalcauza          #+#    #+#             */
/*   Updated: 2021/07/14 16:17:21 by jalcauza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*string_dst;
	unsigned char	*string_src;
	size_t			i;

	i = 0;
	string_dst = (unsigned char *)dest;
	string_src = (unsigned char *)src;
	if (string_dst[0] == '\0' && string_src[0] == '\0')
		return (NULL);
	while (i < n)
	{
		string_dst[i] = string_src[i];
		i++;
	}
	return (string_dst);
}
