/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_memccpy.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalcauza <jalcauza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 17:33:18 by jalcauza          #+#    #+#             */
/*   Updated: 2021/07/01 17:36:36 by jalcauza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include"..\libft.h"
#include"..\ft_memccpy.c"
#include<stdio.h>
int	main(void)
{
	char	dest[15];
	char	*src = "hola : :me llamo :";
	int		c = 'h';

	memccpy(dest, src, c, 10);
	printf("holaaaaa");
	printf("\nel string devuelto por la funcion origen  ahora es %s", dest);
	printf("\n---------------------------------------------------------\n");
    ft_memccpy(dest,src,c,10);
    printf("\nel string devuelto por la funcion origen  ahora es %s", dest);
}
