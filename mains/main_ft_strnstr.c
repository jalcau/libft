/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_strnstr.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalcauza <jalcauza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/03 17:08:38 by jalcauza          #+#    #+#             */
/*   Updated: 2021/07/03 17:09:23 by jalcauza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../libft.h"
#include"../ft_strnstr.c"
#include<stdio.h>
int	main(void)
{
	char	str[30]= "hola me llamo jorge";
	char	need[]= "hola";

	printf("%s", ft_strnstr(str, need, 30));
}
