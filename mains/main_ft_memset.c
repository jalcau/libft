/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_memset.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalcauza <jalcauza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 17:33:47 by jalcauza          #+#    #+#             */
/*   Updated: 2021/07/03 17:06:08 by jalcauza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../libft.h"
#include"../ft_memset.c"
#include<stdio.h>

int	main(void)
{
	char	str[50];
	memset (str, 'h', 10);
	printf ("El string devuelto por la funcion original %s", memset(str, 'h', 10));
	printf("\n--------------------------------------------------------------------");
	printf("\nEl string devuelto por la funcion mía es %s", ft_memset(str, 'h', 10));
   	return(0);
}
