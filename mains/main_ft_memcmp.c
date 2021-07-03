/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_memcmp.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalcauza <jalcauza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 17:33:54 by jalcauza          #+#    #+#             */
/*   Updated: 2021/07/03 15:56:40 by jalcauza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../libft.h"
#include"../ft_memcmp.c"
#include<stdlib.h>
#include<stdio.h>
int main()
{
	char	*s1 = "hola JorgE";
	char	*s2 = "hola Jorge";
	printf("el numero devuelto por la funcion original es %d", memcmp(s1, s2, 20));
	printf("\n-----------------------------------------------------------------");
	printf("\n el numero devuelto por mi funcion es %d", ft_memcmp(s1, s2, 20));
}
