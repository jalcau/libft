/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_substr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalcauza <jalcauza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/03 17:22:46 by jalcauza          #+#    #+#             */
/*   Updated: 2021/07/03 17:23:48 by jalcauza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../libft.h"
#include"../ft_substr.c"
#include<stdio.h>
int	main(void)
{
	char	s1[30] = "hola soy Jorge";

	printf("%s", ft_substr(s1, 1, 9));
}