/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_memcpy.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalcauza <jalcauza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 17:33:50 by jalcauza          #+#    #+#             */
/*   Updated: 2021/07/01 18:30:58 by jalcauza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../libft.h"
#include"../ft_memcpy.c"
#include<stdio.h>
int	main(void)
{
	char	*str = "h";

	char	dest[30];
	printf("el tamano de la funcion origen es %d", strlen(str));
	printf("\nel string devuelto por la funcion origen  ahora es %s", (memcpy(dest, str, 5)));
	printf("\n---------------------------------------------------------\n");
	printf("el string devuelto por la funcion hecha por mi es %s \n", (ft_memcpy(dest, str, 5)));
	return (0);
}