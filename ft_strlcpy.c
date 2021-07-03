/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 20:13:28 by jalcauza          #+#    #+#             */
/*   Updated: 2021/06/30 23:37:03 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_strlen.c"
#include <stdio.h>
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
		while (src[i] != '\0' && i < dstsize - 1)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (srscsize);
}

int	main(void)
{
	char 	dst[15];
	char	src[15] = "hola";

	printf("el tamano devuelto por la funcion original será %ld", strlcpy(dst, src, 3));
	printf("\nel string copiado es %s", dst);
	printf("\nel tamaño devuelto por mi string es %ld", ft_strlcpy(dst, src, 3));
	printf("\nel string copiado es %s", dst);
	return (0);
}

