/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalcauza <jalcauza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 18:09:59 by jalcauza          #+#    #+#             */
/*   Updated: 2021/07/03 16:42:31 by jalcauza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<string.h>
void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char	*string_dst;
	unsigned char	*string_src;
	size_t			i;

	i = 0;
	string_dst = (unsigned char *)dest;
	string_src = (unsigned char *)src;
	if (string_dst[0] == '\0' && string_src[0] == '\0')
		return (0);
	while (i < n)
	{
		string_dst[i] = string_src[i];
		if (string_src[i] == (unsigned char)c)
			return ((void *)string_dst);
		i++;
	}
	return ((void *)string_dst);
}
