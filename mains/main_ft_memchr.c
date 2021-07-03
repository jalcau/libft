/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_memchr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalcauza <jalcauza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 17:33:58 by jalcauza          #+#    #+#             */
/*   Updated: 2021/07/01 17:37:05 by jalcauza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include"..\libft.h"
#include"..\ft_memchr.c"
#include<stdio.h>
int	main(void)
{
	const char	str[] = "hola";
	const char	ch = 'h';
	char		*ret;

	ret = memchr(str, ch, 2);
	printf("el string devuelto por la funcion original es %s", ret);
	ret = ft_memchr(str, ch, 2);
	printf("\nel string devuelto por mi funcion es %s", ret);
	return (0);
}