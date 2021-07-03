/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_strchr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalcauza <jalcauza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 17:33:42 by jalcauza          #+#    #+#             */
/*   Updated: 2021/07/01 18:30:48 by jalcauza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../libft.h"
#include"../ft_strchr.c"
#include<stdio.h>

int	main(void)
{
	const char	str[] = "Hola mundo";
	const char	ch = 'l';
	char		*resp;

	resp = strchr(str, ch);
	printf("El resultado de la operacion con la funcion original es %s", resp);
	printf("\n--------------------------------------------------------------");
	resp = ft_strchr(str, ch);
	printf("\nel resultado de la operacion con mi funcion es la siguiente %s", resp);
	 return (0);
}
