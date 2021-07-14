/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalcauza <jalcauza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 20:13:28 by jalcauza          #+#    #+#             */
/*   Updated: 2021/07/14 16:54:10 by jalcauza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
size_t	ft_strlcpy(char *restrict dst, const char *restrict src, size_t dstsize)
{
	size_t	srscsize;
	size_t	i;

	i = 0;
	if (src[0] == '\0')
		return (0);
	srscsize = ft_strlen(src);
	if (dstsize != 0)
	{
		while (src[i] != '\0' && i + 1 < dstsize)
		{
			dst[i] = src[i];
			i++;
		}	
		while (i < dstsize && i <= ft_strlen(src))
		{
			dst[i] = 0;
			i++;
		}
	}
	return (srscsize);
}
