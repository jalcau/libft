/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_strlcpy.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalcauza <jalcauza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 17:33:28 by jalcauza          #+#    #+#             */
/*   Updated: 2021/07/01 18:30:40 by jalcauza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../libft.h"
#include "../ft_strlcpy.c"
#include<stdio.h>

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
