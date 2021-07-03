/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_strncmp.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalcauza <jalcauza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 17:40:46 by jalcauza          #+#    #+#             */
/*   Updated: 2021/07/01 18:53:28 by jalcauza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../libft.h"
#include"../ft_strncmp.c"
#include<stdio.h>

int	main(void)
{
	char	s1[15] = "hola";
	char	s2[15] = "holamundo";

	printf("%d", ft_strncmp(s1, s2, 10));
	printf("%d", strncmp(s1, s2, 10));
}