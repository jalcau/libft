/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_strjoin.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalcauza <jalcauza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 17:33:38 by jalcauza          #+#    #+#             */
/*   Updated: 2021/07/01 18:30:43 by jalcauza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../libft.h"
#include"../ft_strjoin.c"
#include<stdio.h>

int	main(void)
{
	char	s1[] = "holaa";

	char	s2[] = "holaa";
	printf("\n%s", ft_strjoin (s1, s2));
}
